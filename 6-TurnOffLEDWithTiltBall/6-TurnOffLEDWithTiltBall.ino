/*
 * WorkShop Arduino
 * Epitech HUB activity
 * Dexmos
 */

// Pin 12 will be the Blue LED
int BlueLED = 12;

void setup() {
  // Set 12 pin to Output
  pinMode(BlueLED, OUTPUT);
}

void loop() {
  // Turn on the LED
  digitalWrite(BlueLED, HIGH);
}
