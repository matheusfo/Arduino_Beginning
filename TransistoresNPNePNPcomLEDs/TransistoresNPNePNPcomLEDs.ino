//Exemplo 12 - Diferença entre transistores NPN e PNP na prática 
//Apostila Eletrogate - KIT BEGINNING  
     
//Definição dos pinos 
#define PNP 5 
#define NPN 6 
     
void setup() { 
  //Configura os pinos como saída 
  pinMode(NPN, OUTPUT); 
  pinMode(PNP, OUTPUT); 
} 
     
void loop() { 
  //Envia um sinal de nível lógico alto aos transistores 
  digitalWrite(NPN, HIGH); 
  digitalWrite(PNP, HIGH); 
    
  delay(1000);    // Aguarda 1 segundo 
     
  // Envia um sinal de nível lógico baixo aos transistores  
  digitalWrite(NPN, LOW); 
  digitalWrite(PNP, LOW); 
     
  delay(1000);    //Aguarda 1 segundo 
} 