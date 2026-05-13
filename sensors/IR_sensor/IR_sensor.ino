// ESP32-WROOM IR Sensor Object Detection Code

#define IR_SENSOR 25   // IR sensor OUT pin connected to GPIO 25
#define LED 2          // Built-in LED (most ESP32 boards)

void setup() {

  pinMode(IR_SENSOR, INPUT);
  pinMode(LED, OUTPUT);

  Serial.begin(115200);
}

void loop() {

  int sensorValue = digitalRead(IR_SENSOR);

  // Object detected
  if (sensorValue == LOW) {

    digitalWrite(LED, HIGH);
    Serial.println("Object Detected");
  }

  // No object detected
  else {

    digitalWrite(LED, LOW);
    Serial.println("No Object Detected");
  }

  delay(200);
}void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
