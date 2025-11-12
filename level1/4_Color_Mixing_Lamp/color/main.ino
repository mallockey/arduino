const int greenLedPin = 9;
const int redLedPin = 10;
const int blueLedPin = 11;

const int redSensorPin = A0;
const int greenSensorPin = A1;
const int blueSensorPin = A2;

int redValue = 0;
int greenValue = 0;
int blueValue = 0;

int redSensorValue = 0;
int greenSensorValue = 0;
int blueSensorValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(greenLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
  pinMode(blueLedPin, OUTPUT);
}

void loop() {
  redSensorValue = analogRead(redSensorPin);
  delay(100);
  greenSensorValue = analogRead(greenSensorValue);
  delay(100);
  blueSensorValue = analogRead(blueSensorValue);

  Serial.print("Raw Sensor Value \t red: " );
  Serial.print(redSensorValue);

  Serial.print("\t green: ");
  Serial.print(greenSensorValue);

  Serial.print("\t blue: ");
  Serial.print(blueSensorValue);

  redValue = redSensorValue / 4;
  greenValue = greenSensorValue / 4;
  blueValue = blueSensorValue / 4;

  Serial.print("Mapped sensor values \t red: ");
  Serial.print(redValue);

  Serial.print("\t green: ");
  Serial.print(greenValue);

  Serial.print("\t blue: ");
  Serial.println(blueValue);

  analogWrite(redLedPin, redValue);
  analogWrite(greenLedPin, greenValue);
  analogWrite(blueLedPin, blueValue);


}
