#include <BnrOneA.h>
#include <EEPROM.h>
#include <SPI.h>
BnrOneA one;


#define SSPIN 2

boolean wall;
boolean leftRight;

int leftVal;
int rightVal;

void setup()
{
  Serial.begin(57600);
  one.spiConnect(SSPIN);
  one.stop();

  one.obstacleEmitters( true );

  leftRight = false;
  wall = false;
  leftVal = 1;
  rightVal = 1;
}

void loop()
 
  if ( wall )
  {
    backup();
  }
  else
  {
    autonomous();
  }
}

void autonomous()
{
  if ( leftVal % 100 == 0 )
  {
    leftVal %= 100;
  }
  if ( rightVal % 100 == 0 )
  {
    rightVal %= 100;
  }
  
  buttons();
  sensors();
  toggles();
}

void backup()
{
  one.move( -35 , -5 );
  
  delay( 2000 );
  wall = false;
}

void toggles()
{
  if ( one.readButton() == 3 )
  {
    leftRight = !leftRight;
    delay ( 500 );
  }
  
  if ( ! leftRight )
  {
    one.lcd1( "Left" );
  }
  else
  {
    one.lcd1( "Right" );
  }
}

void buttons()
{
  switch ( one.readButton() )
  {
    case 0:
      one.lcd2(leftVal, rightVal);
      break;

    case 1:
      one.lcd2(leftVal, rightVal);
      if ( ! leftRight )
      {
        leftVal++;
      }
      else
      {
        rightVal++;
      }
      break;

    case 2:
      one.lcd2(leftVal, rightVal);
      if ( ! leftRight )
      {
        rightVal--;
      }
      else
      {
        leftVal--;
      }
      break;

    case 3:
      one.lcd2(leftVal, rightVal);
      break;

    default:
      one.lcd2("");
      break;
  }
}

void sensors()
{
  switch ( one.obstacleSensors() )
  {
    case 0:
      one.move( 40 , 40 );
      break;

    case 1:
      one.move( 30 , -20 );
      
      break;

    case 2:
      one.move( -20 , 30 );
      
      break;

    case 3:
      one.brake( 100 , 100 );
      wall = true;
      break;

    default:
      one.move( 0, 0 );
      break;
  }
}
