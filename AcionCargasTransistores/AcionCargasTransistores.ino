//Exemplo 13 - Acionamento de cargas usando transistores 
//Apostila Eletrogate - KIT BEGINNING 
 
//Definição dos pinos 
#define NPN 4 

void setup() { 
  //Configura os pinos como saída 
  pinMode(NPN, OUTPUT); 
} 

void loop() { 
  //Envia um sinal de nível lógico alto aos transistores 
  digitalWrite(NPN, HIGH);    
  delay(1000);    // Aguarda 1 segundo 
  // Envia um sinal de nível lógico baixo aos transistores  
  digitalWrite(NPN, LOW);     
  delay(1000);    //Aguarda 1 segundo 
} 