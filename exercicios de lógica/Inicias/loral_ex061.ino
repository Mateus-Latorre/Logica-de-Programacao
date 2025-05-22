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
 Serial.println("|        LOPAL - EX06         |");
 Serial.println("|                             |");
 Serial.println("|-----------------------------|");
 Serial.println();
 Serial.println();
 Serial.println("digite a medida em polegadas");
 while(! Serial.available() ){}
 polegadas = Serial.parseFloat();
 centimetros = polegadas / 2.54;
 Serial.println("sua medida em centimetros: " + String(centimetros) );
 delay(10000);
}