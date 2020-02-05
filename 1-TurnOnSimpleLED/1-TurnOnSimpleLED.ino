/*
 * WorkShop Arduino
 * Epitech HUB activity
 * Dexmos
 */

// Used pin (on the arduino)
int LED = 8;

void setup() {
  // Set 8 pin to current Output
  pinMode(LED, OUTPUT);
}

void loop() {
  // Turn on the light
  digitalWrite(LED, HIGH);
}
