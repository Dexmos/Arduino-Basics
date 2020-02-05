/*
 * WorkShop Arduino
 * Epitech HUB activity
 * Dexmos
 */

const byte COLOR_BLACK = 0b000;
const byte COLOR_RED = 0b100;
const byte COLOR_GREEN = 0b010;
const byte COLOR_BLUE = 0b001;
const byte COLOR_MAGENTA = 0b101;
const byte COLOR_CYAN = 0b011;
const byte COLOR_YELLOW = 0b110;
const byte COLOR_WHITE = 0b111;

const byte PIN_LED_R = 10;
const byte PIN_LED_G = 9;
const byte PIN_LED_B = 8;

void setup() {
  
  pinMode(PIN_LED_R, OUTPUT);
  pinMode(PIN_LED_G, OUTPUT);
  pinMode(PIN_LED_B, OUTPUT);
  displayColor(COLOR_BLACK);
}

void loop() {
  
  displayColor(COLOR_RED);
  delay(1000);
  
  displayColor(COLOR_GREEN);
  delay(1000);
  
  displayColor(COLOR_BLUE);
  delay(1000);
  
  displayColor(COLOR_MAGENTA);
  delay(1000);
  
  displayColor(COLOR_CYAN);
  delay(1000);
  
  displayColor(COLOR_YELLOW);
  delay(1000);
  
  displayColor(COLOR_WHITE);
  delay(1000);
  
  displayColor(COLOR_BLACK);
  delay(1000);
}

void displayColor(byte color) {
  digitalWrite(PIN_LED_R, !bitRead(color, 2));
  digitalWrite(PIN_LED_G, !bitRead(color, 1));
  digitalWrite(PIN_LED_B, !bitRead(color, 0));
}
