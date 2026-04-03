#include <Wire.h>
#include <VL53L0X_mod.h>

VL53L0X_mod sensor;

void setup() {
  Serial.begin(115200);
  Wire.begin();  // i2c communication using the default sda & scl pin (21,22)
  sensor.init();
  sensor.setTimeout(500);
}

void loop() {
  int distance = sensor.readRangeSingleMillimeters();
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" mm");
  delay(1000);
}