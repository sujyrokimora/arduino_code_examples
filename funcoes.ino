void setup() {
  
  Serial.begin(9600);// start the serial comm
  Serial.flush();// cleans everything
  int a=12; 
  int b=3;
  unsigned tstart = micros();
 //addmult(a,b); // calls the functions that adds numbers and calculate multiplication always with a,b
  fact(a);// calls the function that calculates the factorial of a
  unsigned long tend=micros();
  unsigned long duration= tend -tstart;
  Serial.print("\n");
  Serial.print("Demorou:");
  Serial.print(duration);
  Serial.print(" ms");
}

void loop() {
  // put your main code here, to run repeatedly:

}
void fact(int a)//function that calculates the factorial of a
{
  unsigned long f=1;
  for (int p = 2; p <= a; p++)//loop that adds up until calculates the factorial of a
    f = f * p;
 
 Serial.println("\n");
 Serial.print("Fatorial de ");
 Serial.print(a);
 Serial.print(" é ");
 Serial.print(f); //shows the number
}

void addmult(int a,int b)//adds numbers and calculate multiplication always with a,b
{
  Serial.println("\n");
  Serial.println("A sua mutlpicaçao de ");
  Serial.print(a);
  Serial.print("*");
  Serial.print(b);
  Serial.print("=");
  Serial.print(a*b);// multiplication
    Serial.println("\n");
  Serial.println("A sua soma de ");
  Serial.print(a);
  Serial.print("+");
  Serial.print(b);
  Serial.print("=");
  Serial.print(a+b);//adds up
}
