int RXled=17;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(RXled, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(RXled, HIGH);   // turn the LED on (HIGH is the voltage level)
  TXLED1;
  delay(1000);                       // wait for a second
  digitalWrite(RXled, LOW);    // turn the LED off by making the voltage LOW
  TXLED0;
  delay(1000);                       // wait for a second
}

