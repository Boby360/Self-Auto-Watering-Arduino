//3rd Party Low power library
#include <LowPower.h> 
//https://github.com/rocketscream/Low-Power/releases/
//Download ZIP, place in Documents/Ardunio/libraries.
//In Arduino sofware, click Sketch, add zip library
  
  //Analog or Digital method (Not fully implemented)
  const int analog = 1;//Leave at default 1.

  //Plant count count(Not implemented, but this will auto increment pins)
  const int plants = 1;//Leave at default 1.
  
  //Analog values
  const int dry = 500; //Lower this value until your plant is watered when dry

  //What pins for relays
  const int pumpPin = 10; //This has to be digital. Default D10 pin 

  //Moisture data pins
  const int soilSensor = A1; //This needs to be analog. Default A1 pin


void setup() {
  //Reducing clocks to save power. This affects how time is measured, so ms values will not be accurate
  CLKPR = 0x80; // (1000 0000) enable change in clock frequency
  CLKPR = 0x01; // (0000 0001) use clock division factor 2 to reduce the frequency from 16 MHz to 8 MHz
  if (analog ==1){
    pinMode(soilSensor, INPUT);
    }
  pinMode(pumpPin, OUTPUT);
  Serial.begin(9600);
  //If your pump runs right after it is plugged in, change all LOW to HIGH, and HIGH to LOW
  digitalWrite(pumpPin, LOW); //Default to off
  delay(2000); //2ish seconds
  
  }

void loop() {
  
  //for(int count = 0; count >= plants; count++){ //Future code for multiple plant support
  //Check current moisture
    int moisture = analogRead(soilSensor);   
    delay(50); //50ms

      if (analog == 1){
        if (moisture >= dry) {
          //Soil is dry
          digitalWrite(pumpPin, HIGH);//Triggering pump

          //Water for roughly 4 seconds. The time is different due to the clock change for power savings
          delay(2000);

          //Turn off pump
          digitalWrite(pumpPin, LOW);

        }
      //Disable for testing if needed
      for(int count = 0; count == 225; count++){ //wait 30min + extra time from clock change
      LowPower.powerDown(SLEEP_8S, ADC_OFF, BOD_OFF);
      }
    }
//}
  
}
