// Exemplo 3 - Entradas e saídas digitais - push-button + led 
// Apostila Eletrogate - KIT BEGINNING 
 
#define PinButton 6                    // define pino digital D6 
#define ledPin 7                       // define pino digital D7 
 
void setup() 
{ 
  pinMode(PinButton, INPUT);           // configura D8 como entrada digital 
  pinMode(ledPin, OUTPUT);             // configura D7 como saída digital 
  Serial.begin(9600);                  // monitor serial - velocidade 9600 Bps 
  delay(100);                          // atraso de 100 milissegundos 
} 
 
void loop() 
{ 
  if (digitalRead(PinButton) == HIGH)  // se chave = nível alto 
  { 
    digitalWrite(ledPin, HIGH);         // liga LED com 5V 
    Serial.println("Acendendo LED");      // imprime no monitor serial 
  } 
  else                                  // senão chave = nível baixo 
  { 
    digitalWrite(ledPin, LOW);          // desliga LED com 0V 
    Serial.println("Desligando LED");     // imprime no monitor serial 
  } 
  delay(100);                           // atraso de 100 milissegundos 
} 
