// C++ code
//
void setup()
{
  Serial.begin(9600);
}
int n1;
int resultado;
void loop()
{
  Serial.println("Digite o numero a qual deseja saber a tabuada:");
  while(! Serial.available()) {} //Espera o usuario digitar
  n1 = Serial.parseInt();
  
  for(int n2 = 1; n2 <= 10; n2++){
  resultado = n1 * n2;
  Serial.println(String(n1) + "*" + String(n2) + "=" + String(resultado));  
  delay(500);
  }
  Serial.println();
  Serial.println();
  Serial.println();
  delay(3000);
}