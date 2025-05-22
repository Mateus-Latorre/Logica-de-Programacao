// C++ code
//
void setup()
{
 Serial.begin(9600);
}
String nome = "";
int cargo = 0;
float salario = 0;
float percentual = 0;
float salarioFinal = 0;
void loop()
{
  Serial.println("Digite o nome do funcionario");
  while (!Serial.available()) {}
  nome = Serial.readString();
  
  Serial.println("Digite o salario");
  while (!Serial.available()) {}
  salario = Serial.parseFloat();
  
  Serial.println("Digite o codigo do cargo");
  Serial.println("1: Escriturario");
  Serial.println("2: Secretario");
  Serial.println("3: Caixa");
  Serial.println("4: Gerente");
  Serial.println("5: Diretor");
  while (!Serial.available()) {}
  cargo = Serial.parseInt();
  
  Serial.println();
  Serial.println();
  Serial.println();
  Serial.println("Nome: " + String(nome));
  Serial.println("Salario sem aumento: R$" + String(salario));
  Serial.println("Codigo do cargo: " + String(cargo));
  if (cargo == 1){
  salarioFinal = salario * 1.5;
  Serial.println("Cargo: Escriturario");
  Serial.println("Percentual de aumento: 50%");
  Serial.println("Salario com aumento: R$" + String(salarioFinal));
  }else if (cargo == 2){
  salarioFinal = salario * 1.35;
  Serial.println("Cargo: Secretario");
  Serial.println("Percentual de aumento: 35%");
  Serial.println("Salario com aumento: R$" + String(salarioFinal));
  }else if (cargo == 3){
  salarioFinal = salario * 1.2;
  Serial.println("Cargo: Caixa");
  Serial.println("Percentual de aumento: 20%");
  Serial.println("Salario com aumento: R$" + String(salarioFinal));
  }else if (cargo == 4){
  salarioFinal = salario * 1.1;
  Serial.println("Cargo: Gerente");
  Serial.println("Percentual de aumento: 10%");
  Serial.println("Salario com aumento: R$" + String(salarioFinal));
  }else if (cargo == 5){
  salarioFinal = salario * 1;
  Serial.println("Cargo: Diretor");
  Serial.println("Seu salario permanecera o mesmo devido ao seu cargo");
  Serial.println("Salario: R$" + String(salarioFinal));
  }else {
  Serial.println("O codigo de cargo que voce digitou nao esta listado");
  }
  delay(3000);
  Serial.println();
  Serial.println();
  Serial.println();
}