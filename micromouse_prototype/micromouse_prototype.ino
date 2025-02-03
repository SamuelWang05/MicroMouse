int IR_Sensor_1 = 13; // D10 on nano
int IR_Sensor_2 = 12; // D9
int IR_Sensor_3 = 11; // D8

void setup() {
  Serial.begin(9600);
  pinMode(IR_Sensor_1, INPUT);
  pinMode(IR_Sensor_2, INPUT);
  pinMode(IR_Sensor_3, INPUT);
}

void loop() {
  int sensorRead_1 = digitalRead(IR_Sensor_1);
  int sensorRead_2 = digitalRead(IR_Sensor_2);
  int sensorRead_3 = digitalRead(IR_Sensor_3);

  Serial.println("Sensor 1 Reading: " + sensorRead_1);
  Serial.println("Sensor 2 Reading: " + sensorRead_2);
  Serial.println("Sensor 3 Reading: " + sensorRead_3);
}
