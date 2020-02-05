/*
 * WorkShop Arduino
 * Epitech HUB activity
 * Dexmos
 */

// Used pin for TiltBall (on the arduino)
int TiltBall = 8;

int TiltBallReader;

void setup() {
  pinMode(TiltBall, INPUT);       // Set 8 pin to current Input
  digitalWrite(TiltBall, HIGH);   // Set up the TiltBall (if you don't the TiltBall won't return HIGH)
  Serial.begin(9600);             // Set port for the console
}

void loop() {
  TiltBallReader = digitalRead(TiltBall);   // Read input from TiltBall (HIGH or LOW)

  if (TiltBallReader == HIGH)               // TiltBall flipped
    Serial.println("TiltBall HIGH");
  else //(TiltBallReader == LOW)
    Serial.println("TiltBall LOW");
}
