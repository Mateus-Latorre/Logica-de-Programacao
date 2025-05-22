
void setup()
{
  Serial.begin(9600);
}
int idade = 0;
long idadeMeses = 0;
long idadeDias = 0;
long idadeHoras = 0;
long idadeMinutos =0;

void loop()
{
  Serial.println("|-----------------------------|");
  Serial.println("|                             |");
  Serial.println("|        LOPAL - EX01         |");
  Serial.println("|                             |");
  Serial.println("|-----------------------------|");
  Serial.println();
  Serial.println();
  Serial.println("digite a sua idade"); 
  while(! Serial.available() ){}
  idade = Serial.parseInt();
  idadeMeses = idade * 12;
  idadeDias = idade * 365;
  idadeHoras = idadeDias * 24 ;
  idadeMinutos = idadeHoras * 60;
  Serial.println("Sua idade em meses: " + String(idadeMeses) );
  Serial.println("Sua idade em dias: " + String(idadeDias) );
  Serial.println("Sua idade em horas: " + String(idadeHoras) );
  Serial.println("Sua idade em minutos: " + String(idadeMinutos) );
}