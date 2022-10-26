//foi so para testar uma cena o stor fez outra
void setup() {
 Serial.begin(9600);
 Serial.flush();
 Serial.print(func(12)); 

}

void loop() {

}

int func(int n)
{
  
  double vfat;
  
  if ( n <= 1 )
    //Caso base: fatorial de n <= 1 retorna 1
    return (1);
  else
  {
    //Chamada recursiva
    vfat = n * func(n - 1);
    return (vfat);
  }
}
