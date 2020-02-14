/*
 * WorkShop Arduino
 * Epitech HUB activity
 * Dexmos
 */

// Used pin for button (on the arduino)
int Button = 12;

int ButtonReader;

void setup() {
  pinMode(Button, INPUT);       // Set 12 pin to current Input
  digitalWrite(Button, HIGH);   // Set up the button (if you don't the button will return HIGH/LOW/HIGH/LOW.. etc)
  Serial.begin(9600);           // Set port for the console
}

void loop() {
  ButtonReader = digitalRead(Button);   // Read output from Button (HIGH or LOW)

  if (ButtonReader == HIGH)
    Serial.println("Button HIGH");
  else //(ButtonReader == LOW)          // Button press
    Serial.println("Button LOW");
}
