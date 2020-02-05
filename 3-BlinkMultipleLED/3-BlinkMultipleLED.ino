/*
 * WorkShop Arduino
 * Epitech HUB activity
 * Dexmos
 */

int BlueLED = 12;   // Pin 12 will be the Blue LED
int RedLED = 8;     // Pin 8 will be the Red LED
int GreenLED = 7;   // Pin 8 will be the Green LED

void setup() {
  pinMode(BlueLED, OUTPUT);     // Set 12 pin to Output
  pinMode(RedLED, OUTPUT);      // Set 8 pin to Output
  pinMode(GreenLED, OUTPUT);    // Set 7 pin to Output
  
  digitalWrite(BlueLED, HIGH);  // To set the First turned on LED.
}

void loop() {
  ManageLED(RedLED, BlueLED);
  ManageLED(GreenLED, RedLED);
  ManageLED(BlueLED, GreenLED);
}

/// <summary>
/// Turn on one LED and Turn off anothera and add delay for special effect.
/// </summary>
/// <param name="TurnOn"> Pin of the LED to Turn on </param>
/// <param name="TurnOff"> Pin of the LED to Turn off </param>
void ManageLED(int TurnOn, int TurnOff) {
  digitalWrite(TurnOn, HIGH);
  digitalWrite(TurnOff, LOW);
  delay(100);
}
