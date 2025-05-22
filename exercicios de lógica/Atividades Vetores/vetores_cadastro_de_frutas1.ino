// C++ code
//
void setup()
{
 int i; 
  
 Serial.begin(9600);
  
 Serial.println("*** SACOLAO DO ZEH ***");
 Serial.println();
  
 String frutas[6];
  
 Serial.print("Oh ZEH, bora cadastrae as frutas!");
  
 Serial.println();
  
 for( i = 0; i <= 5; i++){
 Serial.println("Informe a " + String(i) + " Fruta: ");
 while(!Serial.available());
 String fruta = Serial.readString();
  
 frutas[i] = fruta;
 } 
  for( i = 0; i <= 5; i++){
  Serial.println(String(i) +"a Fruta: " + frutas[i]);
  }
}

void loop()
{
 
}