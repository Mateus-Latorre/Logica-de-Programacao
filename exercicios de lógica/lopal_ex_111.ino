// C++ code
//
void setup()
{
  Serial.begin(9600);
}
float numero = 0;
void loop()
{
  Serial.println("Digite o numero que deseja verificar");
  while (!Serial.available()) {}
  numero = Serial.parseFloat();
  
  if(numero >= 0) {
  Serial.println("seu numero eh positivo");
  } else {
  Serial.println("Seu numero eh negativo");
  }
 delay(5000);
}