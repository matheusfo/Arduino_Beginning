//Exemplo 4 - Acionamento de buzzer com um botão 
//Apostila Eletrogate - KIT BEGINNING 

#define BUTTON 3 
#define BUZZER 4  

void setup(){ 
	pinMode(BUTTON, INPUT_PULLUP); 
	pinMode(BUZZER, OUTPUT); 
	Serial.begin(9600);  
	delay(100);  
} 

void loop(){ 
	if (digitalRead(BUTTON) == LOW){ 
		digitalWrite(BUZZER, HIGH);  
	} else { 
		digitalWrite(BUZZER, LOW); 
	} 
	delay(100); 
} 