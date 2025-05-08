// C++ code
//
void setup()
{
 Serial.begin(9600);
}
float n1 = 0;
float n2 = 0;
float media = 0;
float frequencia;

void loop()
{
 Serial.println("Digite a primeira nota");
 while (! Serial.available());
 n1 = Serial.parseFloat();
  
 Serial.println("Digite a segunda nota");
 while (! Serial.available());
 n2 = Serial.parseFloat();
  
 Serial.println("Digite a porcentagem de frequencia do aluno (sem o sinal %)");
 while (! Serial.available());
 frequencia = Serial.parseFloat();
  
 media = (n1 + n2)/2;

  
 if(media >= 6 && media < 10 && frequencia >= 75){
 Serial.println("APROVADO");
 }else if(media == 10 && frequencia >= 75){
 Serial.println("APROVADO");
 Serial.println("Parabens! Nota maxima");
 }else if(media < 6 && frequencia >= 75){
 Serial.println("REPROVADO");
 Serial.println("Motivo: Nota abaixo da media necessaria");
 }else if(media >= 6 && frequencia < 75) {
 Serial.println("REPROVADO");
 Serial.println("Motivo: Frequencia abaixo da necessaria");
 }else if(media < 6 && frequencia < 75){
 Serial.println("REPROVADO");
 Serial.println("Motivo: Frequencia e nota abaixo da media necessaria");
 }
  delay(3000);
  Serial.println();
  Serial.println();
  Serial.println();
}