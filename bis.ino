  float a=0.;
  float b=1.;
  float tol=1.e-4;
void setup() {
  Serial.begin(9600);
  while(!Serial);
  Serial.flush();
  Serial.print("Bissecção \n");
}
float f(float x)
{
  return exp(x)-3.*x;  
}
float bis()
{
  bool FLAG=true;
  float c2=0;
  while(FLAG)
  {  
     float c=(a+b)/2.;
    Serial.print(a,6);
    Serial.print("\t");
    Serial.print(b,6);
    Serial.print("\t");
    Serial.print(c,6);
    Serial.print("\n");

    if(f(a)*f(c)<0.)
    {
    b=c;
    }
    else
    {
    a=c;
    }
    if(abs(f(c))<tol) FLAG=false;
    c2=c;
  }
  Serial.println("A raiz aproximada é de ");
  Serial.print(c2,6);
}
void loop() {
  // put your main code here, to run repeatedly:
  if(f(a)*f(b)>0.)
  {
    Serial.print("Intervalo invalido");
  }
  else
  {
    bis();
    while(true);
  }
}
