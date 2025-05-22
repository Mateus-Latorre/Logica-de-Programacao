// C++ code
int ledVerde = 13;
int ledAmarelo = 12;
int ledVermelho = 8;
int escolhaDoUsuario;
int continuarNoLed;
void setup()
{
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  Serial.begin(9600);
   do{
  Serial.println("Oque voce deseja fazer:");
  Serial.println();  
  Serial.println("1) Ligar Led Verde");
  Serial.println("2) Desligar Led Verde");
  Serial.println("3) Ligar Led Amarelo");
  Serial.println("4) Desligar Led Amarelo");
  Serial.println("5) Ligar Led Vermelho");
  Serial.println("6) Desligar Led Vermelho");
  Serial.println("7) Ligar Todos os Leds");
  Serial.println("8) Desligar Todos os Leds");
  while(! Serial.available());
  escolhaDoUsuario = Serial.parseInt();
    
  switch(escolhaDoUsuario){
    case 1:
   digitalWrite(ledVerde, HIGH);
   break;
    
    case 2:
   digitalWrite(ledVerde, LOW);
   break;
    
    case 3:
   digitalWrite(ledAmarelo, HIGH);
   break;
    
    case 4:
   digitalWrite(ledAmarelo, LOW);
   break;
    
    case 5:
   digitalWrite(ledVermelho, HIGH);
   break;
    
    case 6:
   digitalWrite(ledVermelho, LOW);
   break;
    
    case 7:
   digitalWrite(ledVermelho, HIGH);
   digitalWrite(ledAmarelo, HIGH);
   digitalWrite(ledVerde, HIGH);
   break;
    
    case 8:
   digitalWrite(ledVermelho, LOW);
   digitalWrite(ledAmarelo, LOW);
   digitalWrite(ledVerde, LOW);    
   break;
    
   default:
    Serial.println("Opcao invalida");
  }
   Serial.println("Deseja continuar no sistema");
   Serial.println("0. Sair");
   Serial.println("1. Continuar");
   while(! Serial.available());
  continuarNoLed = Serial.parseInt(); 
  }while(continuarNoLed == 1);
   Serial.println("Obrigado por usar nosso sistema");
}

void loop()
{
 
  
}