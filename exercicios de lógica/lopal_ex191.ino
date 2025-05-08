// C++ code
//
void setup()
{
  Serial.begin(9600);
}


int idade = 0;

void loop()
{
  Serial.println("Digite a idade");
  while(! Serial.available() );
  idade = Serial.parseInt();
  
  if(idade >= 0 && idade <= 2) {
  Serial.println("Classificacao: Recem-Nascido");
  }else if (idade >= 3 && idade <= 11){
  Serial.println("Classificacao: Crianca");
  }else if (idade >= 12 && idade <= 19){
  Serial.println("Classificacao: Adolescente");
  }else if (idade >= 20 && idade <= 55){
  Serial.println("Classificacao: Adulto");
  }else if (idade >= 56){
  Serial.println("Classificacao: Idoso");
  }else {
  Serial.println("ERRO: Alguma informacao inserida nao faz sentido");
  }
  delay(3000);
  Serial.println();
  Serial.println();
}