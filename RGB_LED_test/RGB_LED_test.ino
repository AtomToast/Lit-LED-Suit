int redPin = 7;
int greenPin = 6;
int bluePin = 5;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

}

void loop() {
  setColor(150, 0, 0); // Red Color
  delay(1000);
  setColor(0, 75, 0); // Green Color
  delay(1000);
  setColor(0, 0, 75); // Blue Color
  delay(1000);
  setColor(75, 75, 75); // White Color
  delay(1000);
}

void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
