// C++ code
//

float n1;
float n2;
float soma;
float subtracao;
float divisao;
float multiplicacao;
int escolhaDaOperacao;
int contador;

void setup()
{
  Serial.begin(9600);
  
   do{
   Serial.println("Seja bem-vindo(a) a calculadora, aproveite ;p");
  Serial.println("Escolha uma das opcoes/operacoes");
  Serial.println("1- Soma");
  Serial.println("2- Subtrair");  
  Serial.println("3- Multiplicar");
  Serial.println("4- Dividir");
  
  while(! Serial.available()) {} //Espera o usuario digitar
  
  escolhaDaOperacao = Serial.parseInt(); //Armazena o que o usuario digitou na variavel 
  
  Serial.println("Agora, para realizar a operacao, digite o 1º numero:");
  while(! Serial.available()) {} //Espera o usuario digitar
  n1 = Serial.parseFloat();
  
  Serial.println("Agora, para realizar a operacao, digite o 2º numero:");
  while(! Serial.available()) {} //Espera o usuario digitar
  n2 = Serial.parseFloat();
  
  if (escolhaDaOperacao == 1){
  soma = n1 + n2;
  Serial.println("O resultado foi: " + String(soma));
  
  switch(escolhaDaOperacao){
   case 1:
    soma = n1 + n2;
    Serial.println("O resultado foi: " + String(soma)); 
    
    break;
    
  case 2:
    subtracao = n1 - n2;
    Serial.println("O resultado foi: " + String(subtracao)); 
    
    break;
    
  case 3:
    multiplicacao = n1 * n2;
    Serial.println("O resultado foi: " + String(multiplicacao)); 
    
    break;
    
  case 4:
    divisao = n1 / n2;
    Serial.println("O resultado foi: " + String(divisao)); 
    
    break;
    
  default:
    Serial.println("Opcao invalida");
  }  
    
   Serial.println("Gostaria de usar a calculadora novamente? Se sim, digite [s], se nao digite [n]");
   while(! Serial.available()) {}
   if (Serial.readString() == "s"){
    contador++;
   }else{
    contador = 0;
    Serial.println("Ate breve, volte mais vezes");
   }
  }}
  while(contador != 0);
   }

void loop()
{
}