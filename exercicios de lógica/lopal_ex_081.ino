// C++ code
//
void setup()
{
 Serial.begin(9600);
}
String cargo = "";
String nome = "";
float salario = 0;
float acrescido = 0;
void loop()
{
//nome
  Serial.println("digite o seu nome");
  while (!Serial.available()) {}
  nome = Serial.readString();
//cargo  
  Serial.println("digite o seu cargo");
  while (!Serial.available()) {}
  cargo = Serial.readString();
//salario  
  Serial.println("digite o seu salario");
  while (!Serial.available()) {}
  salario = Serial.parseFloat();
//acrescido
  acrescido = salario * 0.10;  
//condição
  if (salario < 1000) {
  salario = salario + acrescido;
  } else {
  salario = salario;
  }
//saída
  Serial.println ("Seu nome: " + String(nome) );
  Serial.println ("Seu cargo: " + String(cargo) );
  Serial.println ("Seu salario atual: " + String(salario) );
  delay(5000);
}