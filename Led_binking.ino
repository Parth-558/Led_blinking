// C++ code

int i;
int ledpin[]={2,3,4,5,6,7};
void setup()
{
  for(i=0;i<1;i++){
  pinMode(ledpin[i], OUTPUT);
  }
}

void loop()
{
  digitalWrite(ledpin[0], HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(ledpin[0], LOW);
  delay(500); // Wait for 1000 millisecond(s)
  
  digitalWrite(ledpin[1], HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(ledpin[1], LOW);
  delay(500);
  
  digitalWrite(ledpin[2], HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(ledpin[2], LOW);
  delay(500);
  
  digitalWrite(ledpin[3], HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(ledpin[3], LOW);
  delay(500);
  
  digitalWrite(ledpin[4], HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(ledpin[4], LOW);
  delay(500);
  
  digitalWrite(ledpin[5], HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(ledpin[5], LOW);
  delay(500);
}


