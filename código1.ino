// código C++
//
void setup()
{
  
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
 
}
void loop()
{
  
  
  PiscaLedVermelho13();
}


void PiscaLedVermelho13()
{
   digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
}
