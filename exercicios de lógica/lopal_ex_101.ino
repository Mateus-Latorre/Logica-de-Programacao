// C++ code
//
void setup()
{
 Serial.begin(9600);
}
float produto = 0;
float percentual = 0;
void loop()
{
//produto
  Serial.println("Digite o preco do produto");
  while (!Serial.available()) {}
  produto = Serial.parseFloat();

//percentual 
  Serial.println("Digite o percentual de acrescimo em decimais");
  while (!Serial.available()) {}
  percentual = Serial.parseFloat();

//calculo
  produto = produto + ( produto * percentual);

//saida
  Serial.println("o preco de venda do produto eh de: " + String(produto) );
  
//processamento e saida
  if (percentual < 0.50){
  Serial.println("aviso, a sua margem de lucro sera muito baixa.");
 }
  delay(5000);
}