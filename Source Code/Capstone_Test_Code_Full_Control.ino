// CNC Shield Stepper  Control Demo


const int StepX = 2;
const int DirX = 5;
const int StepY = 3;
const int DirY = 6;
const int StepZ = 4;
const int DirZ = 7;


void setup() {

  Serial.begin(9600);
  pinMode(StepX, OUTPUT);
  pinMode(DirX, OUTPUT);
  pinMode(StepY, OUTPUT);
  pinMode(DirY, OUTPUT);
  pinMode(StepZ, OUTPUT);
  pinMode( DirZ, OUTPUT);

}




void fullCycle() {
  Serial.println("FULL");


  digitalWrite(DirX, HIGH); // set direction, HIGH for clockwise, LOW for anticlockwise
  digitalWrite(DirY, HIGH); // set direction, HIGH for clockwise, LOW for anticlockwise

  for (int x = 0; x < 1000; x++) { // loop for 200 steps
    digitalWrite(StepX, HIGH);
    digitalWrite(StepY, HIGH);
    delayMicroseconds(500);
    digitalWrite(StepX, LOW);
    digitalWrite(StepY, LOW);
    delayMicroseconds(500);
  }
  delay(1000); // delay for 1 second

  digitalWrite(DirX, LOW); // set direction, HIGH for clockwise, LOW for anticlockwise
  digitalWrite(DirY, LOW); // set direction, HIGH for clockwise, LOW for anticlockwise

  for (int x = 0; x < 1000; x++) { // loop for 200 steps
    digitalWrite(StepX, HIGH);
    digitalWrite(StepY, HIGH);
    delayMicroseconds(500);
    digitalWrite(StepX, LOW);
    digitalWrite(StepY, LOW);
    delayMicroseconds(500);
  }
  delay(1000); // delay for 1 second


}






void loop() {


  //Towards Motor

  if (Serial.available() > 0) {

    char inByte = Serial.read();

    if (inByte == 'u') {

      delay(300);
      digitalWrite(DirX, HIGH); // set direction, HIGH for clockwise, LOW for anticlockwise
      digitalWrite(DirY, HIGH); // set direction, HIGH for clockwise, LOW for anticlockwise
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

    }



    // Away

    else if (inByte == 'd') {

      delay(300);
      digitalWrite(DirX, LOW); // set direction, HIGH for away from motor, LOW for towards motor
      digitalWrite(DirY, LOW); // set direction, HIGH for away from motor, LOW for towards motor
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
      
    }
    else if (inByte == 'f') {

      fullCycle();
    }

  }

}
