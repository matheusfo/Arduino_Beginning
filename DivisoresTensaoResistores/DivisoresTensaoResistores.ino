// Exemplo 2 - Divisor de tensão 
// Apostila Eletrogate - KIT BEGINNING 
 
#define sensorPin1 A0           // define entrada analógica A0 
#define sensorPin2 A1           // define entrada analógica A1 
 
int sensorValue1 = 0;           // variável inteiro igual a zero 
int sensorValue2 = 0;           // variável inteiro igual a zero 
float voltage1;                 // variável número fracionário 
float voltage2;                 // variável número fracionário 
 
void setup(){ 
  Serial.begin(9600);           // monitor serial - velocidade 9600 Bps 
  delay(100);                   // atraso de 100 milissegundos 
} 
 
void loop(){ 
  sensorValue1 = analogRead(sensorPin1);   // leitura da entrada analógica A0 
  sensorValue2 = analogRead(sensorPin2);   // leitura da entrada analógica A1 
  voltage1 = sensorValue1 * (5.0 / 1024);  // cálculo da tensão 1 
  voltage2 = sensorValue2 * (5.0 / 1024);  // cálculo da tensão 2 
  Serial.print("Tensao do divisor 1: ");   // imprime no monitor serial 
  Serial.print(voltage1);                  // imprime a tensão 1 
  Serial.print("  Tensao do divisor 2: "); // imprime no monitor serial 
  Serial.println(voltage2);                // imprime a tensão 2 
  delay(500);                              // atraso de 500 milissegundos 
} 