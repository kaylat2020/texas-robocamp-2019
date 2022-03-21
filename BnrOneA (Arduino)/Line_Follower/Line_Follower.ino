#include <BnrOneA.h>
#include <EEPROM.h>
#include <SPI.h>
BnrOneA one;

#define SSPIN 2

boolean leftRight = false;
char lineUI[17];
int thresh;
int adc[8];
float c = 1;
int m;
float x = 1;

void setup()
{
  Serial.begin(57600);
  one.spiConnect(SSPIN);
  one.stop();

  one.obstacleEmitters( true );
   thresh = 400;
}

int findHighest()
{
  int maxV = one.readAdc(0);
  int channel = 0;

  for (int i = 1 ; i < 8 ; i++ )
  {
    int cur = one.readAdc(i);
    if( cur > maxV )
    {
      maxV = cur;
      channel = i;
    }
  }
  return channel;
 }

//35 50 10 10

float kC = 10.0;
float kP = 20.0;
float kD = 10.0;
float pos = 0.0;
float lastPos = 0.0;

void loop()
{
  float maxChan = findHighest();
  printAsterisks(maxChan);
  
  lastPos = pos;
  pos = (maxChan - 3.5) / 3.5;
  float dErr = pos - lastPos;

  int speedL = kC + (kP * pos + kD * dErr);
  int speedR = kC - (kP * pos + kD * dErr);
  
/*
  if(speedL < 0) {
      speedR -= speedL;
      speedL -= speedL;
  } else {
      speedL -= speedR;
      speedR -= speedR;
  }
*/
  float maxSpeed = 35.0;

  if(speedL > speedR) {
    speedR = speedR / speedL * maxSpeed;
    speedL = maxSpeed;
  } else {
    speedL = speedL / speedR * maxSpeed;
    speedR = maxSpeed;
  }
  
  one.move( speedL , speedR );
  
  /*
  buttons();
  toggles();
  */
}

void printAsterisks(int channel) {
  for ( int i = 0 ; i < 8 ; i++ )  {
    if (channel == i) {
      lineUI[ i * 2 ] = '*';
      lineUI[ i * 2 + 1 ] = '*';
    } else {
      lineUI[ i * 2 ] = '-';
      lineUI[ i * 2 + 1 ] = '-';
    }
    
    lineUI[ 16 ] = 0;
    one.lcd1( lineUI );
    }
}

void toggles()
{
  if ( one.readButton() == 3 )
  {
    leftRight = !leftRight;
    delay ( 300 );
  }
}

void buttons()
{
  switch ( one.readButton() )
  {
    case 0:
      if ( ! leftRight )
      {
        one.lcd2(c);
      }
      else
      {
        one.lcd2(x);
      }
      break;

    case 1:
      if ( ! leftRight )
      {
        c++;
        one.lcd2(c);
      }
      else
      {
        x++;
        one.lcd2(x);
      }
      break;

    case 2:
      
      if ( ! leftRight )
      {
        c--;
        one.lcd2(c);
      }
      else
      {
        x--;
        one.lcd2(x);
      }
      break;

    case 3:
      break;

    default:
      break;
  }
}
