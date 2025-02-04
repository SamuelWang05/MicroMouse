int IR_Reciever = 7; // D7 on Arduino
int motor_ctrl_1 = 8; // D8
int motor_ctrl_2 = 9; // D9

void setup() {
  Serial.begin(9600);
  pinMode(IR_Reciever, INPUT);
  pinMode(motor_ctrl_1, OUTPUT);
  pinMode(motor_ctrl_2, OUTPUT);
}

void moveForward() {
  digitalWrite(motor_ctrl_1, HIGH);
  digitalWrite(motor_ctrl_2, LOW);
  Serial.println("I AM INSIDE FORWARD");
}

void moveBackward() {
  digitalWrite(motor_ctrl_1, LOW);
  digitalWrite(motor_ctrl_2, HIGH);
}

void loop() {
  int sensorRead = digitalRead(IR_Reciever); // 1 --> No obstacle, 0 --> OBSTACLE!!! MOVE!!!

  Serial.println("Sensor Reading: " + String(sensorRead));

  if(sensorRead == 1) {
    moveForward();
  } else {
    moveBackward();
  }
}
