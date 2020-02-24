/*
 * WorkShop Arduino
 * Epitech HUB activity
 * Dexmos
 */
 
int ActiveBuzzerPin = 12;

void setup() {}

void loop() {

  /*Tone needs 2 arguments, but can take three
    1) Pin
    2) Frequency - this is in hertz (cycles per second)
    3) Duration
  */
  
  tone(ActiveBuzzerPin, 1000, 500);
  //delay(1000);
}
