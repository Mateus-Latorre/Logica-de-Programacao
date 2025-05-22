// C++ code
//
void setup()
{
 Serial.begin(9600);
}
 long anoNasceu = 0;
 long anoAtual = 0;
 long idade = 0;
 long idadeSemanas = 0;
void loop()
{
 Serial.println("|-----------------------------|");
 Serial.println("|                             |");
 Serial.println("|        LOPAL - EX02         |");
 Serial.println("|                             |");
 Serial.println("|-----------------------------|");
 Serial.println();
 Serial.println();
 Serial.println("digite o ano de nascimento");
 while(! Serial.available() ){}
 anoNasceu = Serial.parseInt();
 Serial.println("digite o ano atual");
 while(! Serial.available() ){}
 anoAtual = Serial.parseInt();
 idade = anoAtual - anoNasceu;
 idadeSemanas = idade * 52;
 Serial.println ( "sua idade:" + String(idade) ); 
 Serial.println ( "sua idade em semanas:" + String(idadeSemanas) );
   
}