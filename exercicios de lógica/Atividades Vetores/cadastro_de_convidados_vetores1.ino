// C++ code
//
int qtdCadastro = 4;
String convidados[4];
int idadeConvidados[4];
String emailConvidados[4];
void desenhaCabecalho()
{
 Serial.println("Seja bem-vindo(a) a minha festa");
 Serial.println();
 Serial.println();

}
void setup()
{
 Serial.begin(9600);
}

void loop()
{
desenhaCabecalho();
for(int i = 0; i < 4; i++){
Serial.println("Informe o " + String(i + 1) + "o nome para cadastro");
while(! Serial.available());
convidados[i] = Serial.readString();
Serial.println();

Serial.println("Informe a idade de " + String(convidados[i]) + " para cadastro");
while(! Serial.available());
idadeConvidados[i] = Serial.parseInt();
Serial.println();

Serial.println("Informe o email de " + String(convidados[i]) + " para cadastro");
while(! Serial.available());
emailConvidados[i] = Serial.readString();
Serial.println();
Serial.println();
}
Serial.println();
Serial.println();
Serial.println();


Serial.println();
for(int i = 0; i < 4; i++){
Serial.println(String(i + 1) + "o convidado: " + String(convidados[i]));
Serial.println("Idade de " + String(convidados[i]) + ": " + String(idadeConvidados[i]));
Serial.println("Email de " + String(convidados[i]) + ": " + String(emailConvidados[i]));
Serial.println("Permissao para a festa: " + String(idadeConvidados[i] >= 18 ? "OK" : "Nao pode entrar na festa por ser menor de idade"));
Serial.println("-------------------------------------------");
Serial.println();
delay(3000);  
}
}

