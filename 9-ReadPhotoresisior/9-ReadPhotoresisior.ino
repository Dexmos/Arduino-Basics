/*
 * WorkShop Arduino
 * Epitech HUB activity
 * Dexmos
 */

const int Resistor = A0;

int value;

void setup() {
  pinMode(Resistor, INPUT);
  Serial.begin(9600);
}

void loop() {
  value = analogRead(Resistor);

  Serial.println(value);
  delay(100);
}
