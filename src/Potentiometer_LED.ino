int potPin = 0;
int Rpin = 9;
int Gpin = 10;
int Bpin = 11;
 
void setup()
{
Serial.begin(9600);
 pinMode(Rpin, OUTPUT);
  pinMode(Gpin, OUTPUT);
  pinMode(Bpin, OUTPUT);
}
 
void loop()
{
int reading = analogRead(potPin);
Serial.println(reading);
delay(500);
if(reading < 341){
  analogWrite(Rpin, 255);   
  analogWrite(Gpin, 0);
  analogWrite(Bpin, 0);
}
else if( 341 < reading && reading < 642){
   analogWrite(Rpin, 0);   
  analogWrite(Gpin, 255);
  analogWrite(Bpin, 0);
}
else if (reading > 642){
  analogWrite(Rpin, 0);   
  analogWrite(Gpin, 0);
  analogWrite(Bpin, 255);
}
}
