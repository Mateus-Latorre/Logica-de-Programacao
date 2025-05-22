// C++ code
//
#include <Servo.h>
Servo meuServo;
Servo motor;
int pontosFeitos;
int Vermelho = 7;
int Verde = 4;
int Azul = 13;
int Azul2 = 12;
int Azul3 = 8;

void cabecalho()
{
  Serial.println("                            ----------------------------");
  Serial.println("                            |                          |");
  Serial.println("                            |                          |");
  Serial.println("                            |BEM VINDO AO JOGO DE DADOS|");
  Serial.println("                            |                          |");
  Serial.println("                            |                          |");
  Serial.println("                            ----------------------------");
  Serial.println();
  Serial.println();
}
void pontinhos(int qtdPontos = 5, int tempo = 700)
{
  for(int i = 1; i <= qtdPontos; i++){
    Serial.print(".");
    delay(tempo);
  }
}
void setup()
{
  pinMode(Verde, OUTPUT);
  pinMode(Vermelho, OUTPUT);
  pinMode(Azul, OUTPUT);
  pinMode(Azul2, OUTPUT);
  pinMode(Azul3, OUTPUT);
  motor.attach(2);
  motor.write(0);
  Serial.begin(9600);
}

void loop()
{
  randomSeed(analogRead(0));
  cabecalho();
  do{
    Serial.println("Digite o seu palpite");
    while(! Serial.available());
    int palpite = Serial.parseInt();

    int numeroSorteado = random(1, 7);
    Serial.println("Jogando o dado");
    pontinhos();

    Serial.println();
    Serial.println("Seu palpite: " + String(palpite));
    Serial.println("Numero do dado: " + String(numeroSorteado));
    Serial.println();
    Serial.println();
    if(palpite == numeroSorteado){
      digitalWrite(Verde, HIGH);
      delay(2000);
      digitalWrite(Verde, LOW);
      pontosFeitos += 1;
    }else{
      digitalWrite(Vermelho, HIGH);
      delay(2000);
      digitalWrite(Vermelho, LOW);
      Serial.println("Que pena, tente novamente");
      pontosFeitos = 0;
    }
  if(pontosFeitos == 1){
  digitalWrite(Azul, HIGH);
  }else if(pontosFeitos == 2){
  digitalWrite(Azul2, HIGH);
  }else if(pontosFeitos == 3){
  digitalWrite(Azul3, HIGH);
  }else{
  digitalWrite(Azul, LOW);
  digitalWrite(Azul2, LOW);
  digitalWrite(Azul3, LOW);
  }
  Serial.println();    
}while(pontosFeitos <= 2);
  Serial.println("Parabens, voce ganhou");
  motor.write(0);
  delay(500);
  motor.write(90);
  delay(500);
  motor.write(180);
}
