// Exemplo 1 - Usando potenciômetro para fazer leituras analógicas 
// Apostila Eletrogate - KIT BEGINNING 
#define sensorPin A0      // define entrada analógica A0

int sensorValue = 0;      // variável inteiro igual a zero  
float voltage;            // variável número fracionário 

void setup(){ 
  Serial.begin(9600);     // monitor serial - velocidade 9600 Bps 
  delay(100);             // atraso de 100 milissegundos 
} 

void loop(){ 
  sensorValue = analogRead(sensorPin);       // leitura da entrada analógica A0 
  voltage = sensorValue * (5.0 / 1024);      // cálculo da tensão 
  Serial.print("Tensão do potenciômetro: "); // imprime no monitor serial 
  Serial.print(voltage);                     // imprime a tensão 
  Serial.print("    Valor: ");               // imprime no monitor serial 
  Serial.println(sensorValue);               // imprime o valor 
  delay(500);                                // atraso de 500 milissegundos 
} 
