//Display LCD

// include the library code:
#include <LiquidCrystal.h>

// Ligações do Arduino
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  
  lcd.begin(16, 2); // Aqui informo que são 16 caracteres e 2 linhas
  lcd.setCursor(0, 0); // To colocando para exibir a frase na coluna 0 e linha 0 (opcional)
  lcd.print("TCC Wesley");
  delay (3000);
  lcd.clear();
  lcd.print("Carregando..."); // Escrevo "Arduino"
  delay (3000);
  lcd.clear();
  lcd.setCursor(0, 0); // E agora to colocando para exibir a frase na coluna 0 e linha 1
  lcd.print("Carregando");
  lcd.setCursor(0, 1);
  lcd.print("10s"); 
  delay (1000);
  lcd.clear();
  lcd.print("Carregando");
  lcd.setCursor(0, 1);
  lcd.print("9s");
  delay (1000);
  lcd.clear();
  lcd.print("Carregando");
  lcd.setCursor(0, 1);
  lcd.print("8s");
  delay (1000);
  lcd.clear();
  lcd.print("Carregando");
  lcd.setCursor(0, 1);
  lcd.print("7s"); 
  delay (1000);
  lcd.clear();
  lcd.print("Carregando");
  lcd.setCursor(0, 1);
  lcd.print("6s");
  delay (1000);
  lcd.clear();
  lcd.print("Carregando");
  lcd.setCursor(0, 1);
  lcd.print("5s");
  delay (1000);
  lcd.clear();
  lcd.print("Carregando");
  lcd.setCursor(0, 1);
  lcd.print("4s"); 
  delay (1000);
  lcd.clear();
  lcd.print("Carregando");
  lcd.setCursor(0, 1);
  lcd.print("3s");
  delay (1000);
  lcd.clear();
  lcd.print("Carregando");
  lcd.setCursor(0, 1);
  lcd.print("2s");
  delay (1000);
  lcd.clear();

  lcd.print("Carregando");
  lcd.setCursor(0, 1);
  lcd.print("1s");
  delay (1000);
  lcd.clear();
  lcd.print("Carregando");
  lcd.setCursor(0, 1);
  lcd.print("0s");
  delay (1000);
  lcd.clear();

  lcd.print("Carga Completa");
}

void loop() {}
