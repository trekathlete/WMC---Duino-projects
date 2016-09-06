// by ben - sept 6, 2016

// this is a super simple blink example

// preprocessor instruction
#define LED 13

void setup() 
{
  // initializes digitial pin to write (OUTPUT) instead of read (INPUT)
  pinMode(LED, OUTPUT);

}

void loop() 
{
  // this is the command to use a digital pin in output mode
  digitalWrite(LED, HIGH);

  // delay is in in milliseconds
  delay(1000);

  digitalWrite(LED, LOW);

  delay(1000);

}
