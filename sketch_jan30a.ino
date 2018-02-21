/* 
  IR Breakbeam sensor demo!
*/

#define LEDPIN 13
  // Pin 13: Arduino has an LED connected on pin 13
  // Pin 11: Teensy 2.0 has the LED on pin 11
  // Pin  6: Teensy++ 2.0 has the LED on pin 6
  // Pin 13: Teensy 3.0 has the LED on pin 13

#define SENSORPIN 4
#define SENSORPIN2 3
#define SENSORPIN3 5
//#define SENSORPIN4 6

// variables will change:
int sensorState1 = 0, lastState1=0, count = 0;        // variable for reading the pushbutton status
int sensorState2 = 0, lastState2=0; 
int sensorState3 = 0, lastState3 = 0;
//int sensorState4 = 0, lastState3 = 0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(LEDPIN, OUTPUT);      
  // initialize the sensor pin as an input:
  pinMode(SENSORPIN, INPUT);     
  digitalWrite(SENSORPIN, HIGH); // turn on the pullup
  digitalWrite(SENSORPIN2, HIGH);
  digitalWrite(SENSORPIN3, HIGH);
  //digitalWrit(SENSORPIN4, HIGH);
 
  Serial.begin(9600);
}

void loop(){
  // read the state of the pushbutton value:
  sensorState1 = digitalRead(SENSORPIN);
  sensorState2 = digitalRead(SENSORPIN2);
  sensorState3 = digitalRead(SENSORPIN3);
  //sensorState4 = digitalRead(SENSORPIN4);

  // check if the sensor beam is broken
  // if it is, the sensorState is LOW:
  if (sensorState1 == LOW) {     
    // turn LED on:
    digitalWrite(LEDPIN, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(LEDPIN, LOW); 
  }
  
  //if (sensorState && !lastState) {
    //Serial.println("Unbroken");
  //} 
  if (!sensorState1 && lastState1) {
    count++;
    Serial.println(count);
    delay(500);
  }
  lastState1 = sensorState1;

   
  // check if the sensor beam is broken
  // if it is, the sensorState is LOW:
  if (sensorState2 == LOW) {     
    // turn LED on:
    digitalWrite(LEDPIN, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(LEDPIN, LOW); 
  }
  
  //if (sensorState && !lastState) {
    //Serial.println("Unbroken");
  //} 
  if (!sensorState2 && lastState2) {
    count++;
    Serial.println(count);
    delay(500);
  }
  lastState2 = sensorState2;

  if (sensorState3 == LOW) {     
    // turn LED on:
    digitalWrite(LEDPIN, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(LEDPIN, LOW); 
  }
  
  //if (sensorState && !lastState) {
    //Serial.println("Unbroken");
  //} 
  if (!sensorState3 && lastState3) {
    count++;
    Serial.println(count);
    delay(500);
  }
  lastState3 = sensorState3;

  /*if (sensorState4 == LOW) {     
    // turn LED on:
    digitalWrite(LEDPIN, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(LEDPIN, LOW); 
  }
  
  //if (sensorState && !lastState) {
    //Serial.println("Unbroken");
  //} 
  if (!sensorState4 && lastState4) {
    count++;
    Serial.println(count);
    delay(500);
  }
  lastState4 = sensorState4;*/
}
