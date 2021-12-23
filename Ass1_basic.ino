//Vo Tue Nam   CE140557
// initialize digital pin LED_BUILTIN as an output.

const int D8 =0;

void setup() {

  pinMode(D8, OUTPUT);

}

// the loop function runs over and over again forever

void loop() {

  digitalWrite(D8, HIGH);   // turn the LED on (HIGH is the voltage level)

  delay(1000);              // wait for a second

  digitalWrite(D8     , LOW);    // turn the LED off by making the voltage LOW

  delay(1000);              // wait for a second

}
