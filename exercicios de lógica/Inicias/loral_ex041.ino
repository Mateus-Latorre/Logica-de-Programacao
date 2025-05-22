// C++ code
//
void setup()
{
Serial.begin(9600);
}
String nome = "";
float peso = 0;
float altura = 0;
float alturaIMC = 0;
float IMC = 0;
void loop()
{
  Serial.println("|-----------------------------|");
  Serial.println("|                             |");
  Serial.println("|        LOPAL - EX04         |");
  Serial.println("|                             |");
  Serial.println("|-----------------------------|");
  Serial.println();
  Serial.println();
  Serial.println("digite a seu nome");
  while(! Serial.available() ){}
  nome = Serial.readString();
  Serial.println("digite a seu peso");
  while(! Serial.available() ){}
  peso = Serial.parseFloat();
  Serial.println("digite a sua altura");
  while(! Serial.available() ){}
  altura = Serial.parseFloat();
  alturaIMC = float(altura) * float(altura);
  IMC = float(peso) / float(alturaIMC);
  Serial.println("seu nome eh: " + String(nome));
  Serial.println("seu IMC eh: " + String(IMC));
}
