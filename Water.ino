  //Variables

  //Analog or Digital method
  const int analog = 1;

  //Plant count count
  const int plants = 1;
  
  //Analog values
  const int dry = 300; // Lower this value until your plant is watered when dry.

  //What pins for relays
  const int pumpPin = 10; // needs to be digital

  //Moisture data pins
  const int soilSensor = A1; // needs to be analog

void setup() {
  
  pinMode(pumpPin, OUTPUT);
  Serial.begin(9600);
  digitalWrite(pumpPin, HIGH);
  delay(5000); //5 seconds
  
  if (analog ==1){
    pinMode(soilSensor, INPUT);
    }
}

void loop() {
  
  for(int count = 0; count >= plants; count++){ //Future code for multiple plant support
  // Check current moisture
    int moisture = analogRead(soilSensor);
    delay(5000); //5 seconds

      if (analog == 1){
        if (moisture >= dry) {
          //Soil is dry
          digitalWrite(pumpPin, LOW);//Triggering pump

          //Water for 5 seconds
          delay(5000);

          //Turn off pump
          digitalWrite(pumpPin, HIGH);

        }
    }
}
  delay(3600000UL); //4 hours

}
