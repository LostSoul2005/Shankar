// C++ code
//
void setup()
{
pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
 
}
void loop()
{
 digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  delay(1000);
  digitalWrite(13,0);
  digitalWrite(12,0);
  delay(1000);

}