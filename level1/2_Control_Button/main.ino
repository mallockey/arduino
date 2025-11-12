void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);

}
int TOP_RED = 5;
int MIDDLE_RED = 4;
int BOTTOM_GREEN = 3;
int SWITCH = 2;

void loop() {
  int switchState = digitalRead(2);

  if (switchState == LOW) {
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  } else {
    
    // Top Red
    digitalWrite(TOP_RED, HIGH);
    delay(1000);
    digitalWrite(TOP_RED, LOW);
    delay(1000);
    digitalWrite(TOP_RED, HIGH);
    delay(1000);
    digitalWrite(TOP_RED, LOW);
    delay(1000);
    digitalWrite(TOP_RED, HIGH);
    delay(1000);
    digitalWrite(TOP_RED, LOW);

    // Middle Red
    digitalWrite(TOP_RED, LOW);
    digitalWrite(MIDDLE_RED, HIGH);

    delay(500);
    digitalWrite(MIDDLE_RED, LOW);
    delay(500);
    digitalWrite(MIDDLE_RED, HIGH);
    delay(500);
    digitalWrite(MIDDLE_RED, LOW);
    delay(500);
    digitalWrite(MIDDLE_RED, HIGH);
    delay(500);
    digitalWrite(MIDDLE_RED, LOW);
    delay(500);
    digitalWrite(MIDDLE_RED, HIGH);
    delay(500);
    digitalWrite(MIDDLE_RED, LOW);
    delay(500);
    digitalWrite(MIDDLE_RED, HIGH);
    delay(500);
    digitalWrite(MIDDLE_RED, LOW);
    

    // Green
    digitalWrite(MIDDLE_RED, LOW);
    digitalWrite(BOTTOM_GREEN, HIGH);
    delay(10000);
  }

}
