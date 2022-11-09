
void setup() {
  Serial.begin(9600);
  while(!Serial);
  Serial.flush();
  pinMode(LED_BUILTIN,OUTPUT);
  blinkLED(500,500,10);
}

void loop() {
}

void blinkLED(int a, int b,int c)
{
  for(int d=1;d<=c;d++)
  {
  Serial.print("rep:");
  Serial.print(d);
  
  Serial.print("\nON");  
  digitalWrite(LED_BUILTIN,HIGH);
  delay(a);
  digitalWrite(LED_BUILTIN,LOW);
  Serial.print("\nOFF\n");  
  delay(b);
  }
}
