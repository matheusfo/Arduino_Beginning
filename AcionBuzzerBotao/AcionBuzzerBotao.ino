// Exemplo 5 - Sensor de luz LDR 
// Apostila Eletrogate - KIT BEGINNING 
 
#define AnalogLDR A0                   // define pino analógico A0 
#define Limiar 2.8                     // define constante igual a 1.5 
#define ledPin 13                      // define pino digital D13  
 
int Leitura = 0;                       // variável inteiro igual a zero 
float VoltageLDR;                      // variável número fracionário 
float ResLDR;                          // variável número fracionário 
 
void setup() 
{ 
  pinMode(ledPin, OUTPUT);                 // configura D13 como saída digital 
  Serial.begin(9600);                      // monitor serial - velocidade 9600 Bps 
  delay(100);                              // atraso de 100 milissegundos 
} 
 
void loop() 
{ 
  Leitura = analogRead(AnalogLDR);         // leitura da tensão no pino analógico A0 
  VoltageLDR =  Leitura * (5.0/1024);      // cálculo da tensão no LDR 
  Serial.print("Leitura sensor LDR = ");   // imprime no monitor serial 
  Serial.println(VoltageLDR);              // imprime a tensão do LDR 
 
  if (VoltageLDR > Limiar)                 // se a tensão LDR maior do que limiar 
    digitalWrite(ledPin, HIGH);            // liga LED com 5V 
  else                                     // senão a tensão LDR < limiar 
    digitalWrite(ledPin, LOW);             // desliga LED com 0V 
  delay(500);                              // atraso de 500 milissegundos 
} 