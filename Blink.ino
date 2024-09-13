
//blink function to blink lights
void blink() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  //turn the LED on in pin 12
  digitalWrite(12, HIGH);
  delay(1000);
  //turn off the pin 12 power
  digitalWrite(12,LOW);
  //turn on power in pin 11
  digitalWrite(11, HIGH);
  delay(1000);
  // turn off power in pin 11
  digitalWrite(11, LOW);
  
  
  
  }


// the setup function runs once when you press reset or power the board
void setup() {
  //Init pins 11-13
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  
}
// the loop function runs over and over again forever
void loop() {
  //use the blink mode
  
  blink();
}
