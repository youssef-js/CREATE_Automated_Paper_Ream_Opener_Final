// CNC Shield Stepper  Control Demo


const int StepX = 4;
const int DirX = 7;
const int StepY = 3;
const int DirY = 6;
const int StepZ = 28;
const int DirZ = 29;
const int StepN = 22;
const int DirN = 23;
const int StartButtonPin = 25;
const int StopButtonPin = 24;
int StartButtonState = 0;
int StopButtonState = 0;


void setup() {

  Serial.begin(9600);
  pinMode(StartButtonPin, INPUT);
  pinMode(StopButtonPin, INPUT);
  pinMode(StepX, OUTPUT);
  pinMode(DirX, OUTPUT);
  pinMode(StepY, OUTPUT);
  pinMode(DirY, OUTPUT);
  pinMode(StepZ, OUTPUT);
  pinMode(DirZ, OUTPUT);
  pinMode(StepN, OUTPUT);
  pinMode(DirN, OUTPUT);

}

void resumeFun() {
  StartButtonState = digitalRead(StartButtonPin);
  if (StartButtonState == HIGH) {
    return;
  }
  else {
    Serial.println("Stop");
    resumeFun();
  }
}

int fullCycle() {
  Serial.println("FULL");

  delay(500);
  digitalWrite(DirX, HIGH); // set direction, HIGH for clockwise, LOW for anticlockwise
  digitalWrite(DirY, HIGH); // set direction, HIGH for clockwise, LOW for anticlockwise
  digitalWrite(DirN, LOW);

  for (int x = 0; x < 13300; x++) { // loop for 200 steps
    StopButtonState = digitalRead(StopButtonPin);
    if (StopButtonState == HIGH) {
      resumeFun();
    }
    if (x < 400) {
      digitalWrite(StepX, HIGH);
      digitalWrite(StepY, HIGH);
      digitalWrite(StepN, HIGH);
      delayMicroseconds(500);
      digitalWrite(StepX, LOW);
      digitalWrite(StepY, LOW);
      digitalWrite(StepN, LOW);
      delayMicroseconds(500);
    }
    else {
      digitalWrite(StepN, HIGH);
      delayMicroseconds(500);
      digitalWrite(StepN, LOW);
      delayMicroseconds(500);
    }
  }
  //delay(1000);

  /* for (int x = 0; x < 300; x++) { // loop for 200 steps
     StopButtonState = digitalRead(StopButtonPin);
     if (StopButtonState == HIGH) {
       resumeFun();
     }
     digitalWrite(StepX, HIGH);
     digitalWrite(StepY, HIGH);
     delayMicroseconds(1000);
     digitalWrite(StepX, LOW);
     digitalWrite(StepY, LOW);
     delayMicroseconds(1000);
    }*/
  //delay(1000); // delay for 1 second


  digitalWrite(DirZ, HIGH);

  for (int x = 0; x < 1250; x++) { // loop for 200 steps
    StopButtonState = digitalRead(StopButtonPin);
    if (StopButtonState == HIGH) {
      Serial.println("S");
      resumeFun();
    }
    digitalWrite(StepZ, HIGH);
    delayMicroseconds(1000);
    digitalWrite(StepZ, LOW);
    delayMicroseconds(1000);
  }
  //delay(1000); // delay for 1 second

  /*for (int x = 0; x < 300; x++) { // loop for 200 steps
    StopButtonState = digitalRead(StopButtonPin);
    if (StopButtonState == HIGH) {
      resumeFun();
    }
    digitalWrite(StepX, HIGH);
    digitalWrite(StepY, HIGH);
    delayMicroseconds(1000);
    digitalWrite(StepX, LOW);
    digitalWrite(StepY, LOW);
    delayMicroseconds(1000);
    }*/
  //delay(1000); // delay for 1 second

  delay(500);
  digitalWrite(DirX, LOW); // set direction, HIGH for clockwise, LOW for anticlockwise
  digitalWrite(DirY, LOW); // set direction, HIGH for clockwise, LOW for anticlockwise
  digitalWrite(DirN, HIGH);

  for (int x = 0; x < 13500; x++) { // loop for 200 steps
    StopButtonState = digitalRead(StopButtonPin);
    if (StopButtonState == HIGH) {
      resumeFun();
    }
      digitalWrite(StepN, HIGH);
      delayMicroseconds(500);
      digitalWrite(StepN, LOW);
      delayMicroseconds(500);
  }
  //delay(1000); // delay for 1 second

  for (int x = 0; x < 400; x++) { // loop for 200 steps
    StopButtonState = digitalRead(StopButtonPin);
    if (StopButtonState == HIGH) {
      resumeFun();
    }
      digitalWrite(StepX, HIGH);
      digitalWrite(StepY, HIGH);
      delayMicroseconds(1000);
      digitalWrite(StepX, LOW);
      digitalWrite(StepY, LOW);
      delayMicroseconds(1000);
  }

  digitalWrite(DirZ, LOW);

  for (int x = 0; x < 1250; x++) { // loop for 200 steps
    StopButtonState = digitalRead(StopButtonPin);
    if (StopButtonState == HIGH) {
      resumeFun();
    }
    digitalWrite(StepZ, HIGH);
    delayMicroseconds(1000);
    digitalWrite(StepZ, LOW);
    delayMicroseconds(1000);
  }
  //delay(1000); // delay for 1 second

  return 1;
}

void loop() {

  StartButtonState = digitalRead(StartButtonPin);

  //Towards Motor

  if (Serial.available() > 0) {

    char inByte = Serial.read();

    if (inByte == 'u') {

      delay(300);
      digitalWrite(DirX, HIGH); // set direction, HIGH for clockwise, LOW for anticlockwise
      digitalWrite(DirY, LOW); // set direction, HIGH for clockwise, LOW for anticlockwise
      digitalWrite(DirZ, HIGH);
      Serial.println("UP");
      for (int x = 0; x < 1000; x++) {
        char inByte = Serial.read();
        if (inByte == 's') {
          Serial.println("Break");
          break;
        }
        digitalWrite(StepX, HIGH);
        digitalWrite(StepY, HIGH);
        delayMicroseconds(500);
        digitalWrite(StepX, LOW);
        digitalWrite(StepY, LOW);
        delayMicroseconds(500);
      }

      delay(1000);

      for (int x = 0; x < 800; x++) {
        char inByte = Serial.read();
        if (inByte == 's') {
          Serial.println("Break");
          break;
        }
        digitalWrite(StepZ, HIGH);
        delayMicroseconds(500);
        digitalWrite(StepZ, LOW);
        delayMicroseconds(500);
      }

      delay(1000);

    }



    // Away

    else if (inByte == 'd') {

      delay(300);
      digitalWrite(DirX, LOW); // set direction, HIGH for away from motor, LOW for towards motor
      digitalWrite(DirY, HIGH); // set direction, HIGH for away from motor, LOW for towards motor
      Serial.println("DOWN");
      for (int x = 0; x < 1000; x++) {
        char inByte = Serial.read();
        if (inByte == 's') {
          Serial.println("Break");
          break;
        }
        digitalWrite(StepX, HIGH);
        digitalWrite(StepY, HIGH);
        delayMicroseconds(500);
        digitalWrite(StepX, LOW);
        digitalWrite(StepY, LOW);
        delayMicroseconds(500);
      }
      delay(1000);

      digitalWrite(DirZ, LOW);
      for (int x = 0; x < 800; x++) {
        char inByte = Serial.read();
        if (inByte == 's') {
          Serial.println("Break");
          break;
        }
        digitalWrite(StepZ, HIGH);
        delayMicroseconds(500);
        digitalWrite(StepZ, LOW);
        delayMicroseconds(500);
      }

      delay(1000);


    }
    else if (inByte == 'f') {

      fullCycle();
    }
    else if (inByte == 'q') {

      digitalWrite(DirN, HIGH);
      for (int x = 0; x < 5000; x++) { // loop for 200 steps
        digitalWrite(StepN, HIGH);
        delayMicroseconds(500);
        digitalWrite(StepN, LOW);
        delayMicroseconds(500);
      }
      delay(1000); // delay for 1 second

    }
    else if (inByte == 'w') {

      digitalWrite(DirN, LOW);
      for (int x = 0; x < 5000; x++) { // loop for 200 steps
        digitalWrite(StepN, HIGH);
        delayMicroseconds(500);
        digitalWrite(StepN, LOW);
        delayMicroseconds(500);
      }
      delay(1000); // delay for 1 second
    }

  }

  if (StartButtonState == HIGH) {
    fullCycle();
  }
}
