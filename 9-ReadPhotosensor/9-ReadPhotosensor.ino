/*
 * WorkShop Arduino
 * Epitech HUB activity
 * Dexmos
 */

const int Photosensor = A0;

int value;

void setup() {
  pinMode(Photosensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  value = analogRead(Photosensor);

  Serial.println(value);
  delay(100);
}
