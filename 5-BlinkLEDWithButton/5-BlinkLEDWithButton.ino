/*
 * WorkShop Arduino
 * Epitech HUB activity
 * Dexmos
 */

// Used pin (on the arduino)
int LED = 12;

void setup() {
  // Set 12 pin to current Output
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);  // Turn on the LED
  delay(100);               // Add delay between action
  digitalWrite(LED, LOW);  // Turn off the LED
  delay(100);
}
