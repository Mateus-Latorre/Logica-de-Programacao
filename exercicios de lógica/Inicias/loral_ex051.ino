// C++ code
//
void setup()
{
 Serial.begin(9600);
}
 float centimetros = 0;
 float polegadas = 0;
void loop()
{
 Serial.println("|-----------------------------|");
 Serial.println("|                             |");
 Serial.println("|        LOPAL - EX05         |");
 Serial.println("|                             |");
 Serial.println("|-----------------------------|");
 Serial.println();
 Serial.println();
 Serial.println("digite a medida em centimetros");
 while(! Serial.available() ){}
 centimetros = Serial.parseFloat();
 polegadas = centimetros * 2.54;
 Serial.println("sua medida em polegadas: " + String(polegadas) );
 delay(10000);
}