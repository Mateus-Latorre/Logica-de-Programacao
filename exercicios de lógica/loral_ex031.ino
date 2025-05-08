// C++ code
//
void setup()
{
 Serial.begin(9600);
}
 int Numero = 0;
 int NumeroDobro = 0;
 
void loop()
{
Serial.println("|-----------------------------|");
Serial.println("|                             |");
Serial.println("|        LOPAL - EX03         |");
Serial.println("|                             |");
Serial.println("|-----------------------------|");
Serial.println();
Serial.println();
Serial.println("digite um numero");
while(! Serial.available() ){}
Numero = Serial.parseInt();
NumeroDobro = Numero * 2;
Serial.println("O dobro de " + String(Numero) + " eh: " + String(NumeroDobro) );
}