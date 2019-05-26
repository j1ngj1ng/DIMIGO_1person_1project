int rpin = 11;
int bpin = 10;
int gpin = 9;
int color_value[3];
 
void setup()
{
  pinMode(rpin, OUTPUT);
  pinMode(gpin, OUTPUT);
  pinMode(bpin, OUTPUT);
}

void loop()
{
  color_value[0] = analogRead(A0)/4; //(0~1023 => 1024/4=256)
  color_value[1] = analogRead(A1)/4;
  color_value[2] = analogRead(A2)/4;
  Color(color_value[0],color_value[1],color_value[2]);
}

void Color(int red, int green, int blue)
{
  analogWrite(rpin, red);
  analogWrite(gpin, green);
  analogWrite(bpin, blue); 
}
