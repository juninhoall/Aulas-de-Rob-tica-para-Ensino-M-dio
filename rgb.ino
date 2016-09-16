

/* Led pins (PWM)
 *  Red - pin 9
 *  Green - pin 10
 *  Blue - pin 11
 */
int rgbPins[3] = {9, 10, 11};

void setup()
{
  for(int i = 0; i < 3; i++) {
  pinMode(rgbPins[i], OUTPUT);
  }
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
  analogWrite(rgbPins[0], color >> 16);
  analogWrite(rgbPins[1], color >> 8 & 0xFF);
  analogWrite(rgbPins[2], color & 0xFF);
}
