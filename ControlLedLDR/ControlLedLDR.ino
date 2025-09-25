// Exemplo 6 - Acionando o Micro Servo TowerPro 
// Apostila Eletrogate - KIT BEGINNING 

#include <Servo.h>	  // usando biblioteca Servo                        

Servo myservo;        // cria o objeto myservo                   

#define potpin A0     // define pino analógico A0                

int val;              // variável inteiro                           

void setup() 
{ 
	myservo.attach(6);  // configura pino D6 - controle do Servo                 
} 

void loop() 
{ 
	val = analogRead(potpin); 			// leitura da tensão no pino A0 
  	val = map(val, 0, 1023, 0, 179); 	// converte a leitura em números (0-179) 
	myservo.write(val);         		// controle PWM do servo          
	delay(15);            				// atraso de 15 milissegundos               
} 