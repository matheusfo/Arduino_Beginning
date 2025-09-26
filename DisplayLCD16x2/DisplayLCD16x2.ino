// Exemplo 11 - Display LCD 16x2 
// Apostila Eletrogate - KIT BEGINNING 
#include <LiquidCrystal.h>               // biblioteca Liquid Crystal 
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);     // pinos do LCD - RS E D4 D5 D6 D7 
int contador = 0;                        // variável contador 
void setup(){ 
  lcd.begin(16, 2);                      // inicializa LCD 16x2 
  delay(500);                            // atraso de 0,5 segundos 
} 
 
void loop(){ 
  lcd.clear();                           // limpa tela do LCD 
  lcd.setCursor(0, 0);                   // selecionando coluna 0 e linha 0 
  lcd.print("Exemplo LCD !");            // mostra no LCD 
  lcd.setCursor(1, 1);                   // selecionando coluna 1 e linha 1 
  lcd.print(contador);                   // mostra no LCD a contagem 
  contador++;                            // incrementa contador 
  if (contador == 60)                    // se contador = 60 
    contador = 0;                        // zera o contador 
  delay(1000);                           // atraso de 1 segundo 
}