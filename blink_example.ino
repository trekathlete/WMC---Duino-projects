// by ben - sept 6, 2016

// this is a super simple blink example

// preprocessor instruction
#define LED 13

void setup() 
{
  // initializes digitial pin to write (OUTPUT) instead of read (INPUT)
  pinMode(LED, OUTPUT);

  Serial.begin(9600);

}

void loop() 
{
  int newRan = random(0, 2);

  if(newRan == 0)
  {
    Serial.print("you have landed on random = "); Serial.println(newRan);
    Serial.println("this blinks on a one second delay\n\n");
      
    for(int i = 0; i < 4; i++)
    {
      // this is the command to use a digital pin in output mode
      digitalWrite(LED, HIGH);
    
      // delay is in in milliseconds
      delay(1000);
    
      digitalWrite(LED, LOW);
    
      delay(1000);
    }
  }

  if(newRan == 1)
  {
    Serial.print("you have landed on random = "); Serial.println(newRan);
    int count = 0;
    while( count < 1000 )
    {
      digitalWrite(LED, HIGH);
      
      count += 20;

      Serial.print("Blink delay On = "); Serial.println(count);
      
      delay(count);
    
      digitalWrite(LED, LOW);

      count += 20;

      Serial.print("Blink delay Off = "); Serial.println(count);
      
      delay(count);
    }
  }

  if(newRan == 2)
  {
    Serial.print("you have landed on random = "); Serial.println(newRan);
    
    for(int i = 0; i < 1000; i += 50)
    {
      digitalWrite(LED, HIGH);
      Serial.print("Blink delay On = "); Serial.println(i);
      delay(i);
    
      digitalWrite(LED, LOW);
      Serial.print("Blink delay Off = "); Serial.println(i);
      delay(i);
    }
  }
}
