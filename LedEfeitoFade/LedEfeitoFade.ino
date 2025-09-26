// Exemplo 8 - Efeito fade 
// Apostila Eletrogate - KIT BEGINNING 

#define LED 3             //nomeia o pino 3 

void setup(){ 
  pinMode(LED, OUTPUT);   //seta o pino 3 como saída     
} 

void loop(){ 
  for(int i=0; i<255; i++){   //incrementa os valores de 0 até 255 
    analogWrite(LED, i);      //liga o LED proporcionalmente a i 
    delay(10);                //aguarda 10 milissegundos 
  } 
 for(int i=255; i>0; i--){   //decrementa os valores de 255 até 0 
    analogWrite(LED, i);      //liga o LED proporcionalmente a i 
    delay(10);                //aguarda 10 milissegundos 
  } 
} 