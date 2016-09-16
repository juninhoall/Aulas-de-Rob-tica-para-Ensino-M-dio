

/* Led pins (PWM)
 *  Red - pin 9
 *  Green - pin 10
 *  Blue - pin 11
 */
int vermelho = 9;
int verde = 10;
int azul = 11;

void setup()
{
  pinMode(vermelho, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT); 
}

void loop()
{ 
  setColor(0xFF0000);  // red
  delay(1000);
  setColor(0x00FF00);  // green
  delay(1000);
  setColor(0x0000FF);  // blue
  delay(1000);
  setColor(0xFFFF00);  // yellow
  delay(1000);  
  setColor(0x500050);  // purple
  delay(1000);
  setColor(0x00FFFF);  // aqua
  delay(1000);
}
 
void setColor(long color) {
  analogWrite(vermelho, color >> 16);
  analogWrite(verde, color >> 8 & 0xFF);
  analogWrite(azul, color & 0xFF);
}
