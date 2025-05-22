// C++ code
//
void setup()
{
 Serial.begin(9600);
}
float salario = 0;
float aumento = 0;
void loop()
{
//salario
  Serial.println("Digite o seu salario");
  while (!Serial.available()) {}
  salario = Serial.parseFloat();

//aumento
  aumento = salario * 0.30;

//condição
  if (salario < 500) {
  salario = salario + aumento;
  Serial.println ("Seu novo salario eh: " + String(salario) );
  } else {
  salario = salario;
  Serial.println ("Que pena, voce continuara com seu salario antigo de: " + String(salario) );
  
  }
 delay(5000);
 }