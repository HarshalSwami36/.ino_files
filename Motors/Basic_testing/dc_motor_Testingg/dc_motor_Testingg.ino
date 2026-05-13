// ESP32 + BTS7960
// DC Motor Continuous Forward Rotation

#define RPWM 25
#define LPWM 26

void setup() {

  pinMode(RPWM, OUTPUT);
  pinMode(LPWM, OUTPUT);

  // Forward Direction
  analogWrite(RPWM, 200);   // Speed (0 - 255)
  analogWrite(LPWM, 0);

}

void loop() {

  // Nothing here
  // Motor keeps running continuously

}