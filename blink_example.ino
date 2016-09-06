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
  int newRan = random(0, 2);

  if(newRan == 0)
  {
    // this is the command to use a digital pin in output mode
    digitalWrite(LED, HIGH);
  
    // delay is in in milliseconds
    delay(1000);
  
    digitalWrite(LED, LOW);
  
    delay(1000);
  }

  if(newRan == 1)
  {
    int count = 0;
    while( count < 1000 )
    {
      digitalWrite(LED, HIGH);

      count += 20;
      delay(count);
    
      digitalWrite(LED, LOW);

      count += 20;
      delay(count);
    }
  }

  if(newRan == 2)
  {
    for(int i = 0; i < 1000; i += 50)
    {
      digitalWrite(LED, HIGH);
      
      delay(i);
    
      digitalWrite(LED, LOW);
    
      delay(i);
    }
  }
}
