#include <vexMotor.h>

#define LEFT_DRIVE 11
#define RIGHT_DRIVE 10

vexMotor leftDrive;
vexMotor rightDrive;

void setup() {
  Serial.begin(115200);
  leftDrive.attach(LEFT_DRIVE);
  rightDrive.attach(RIGHT_DRIVE);
}

void loop() {
  leftDrive.write(-255);
  rightDrive.write(255);
  delay(2000);

  leftDrive.write(0);
  rightDrive.write(0);
  delay(250);

  leftDrive.write(-255);
  rightDrive.write(-255);
  delay(2000);

  leftDrive.write(0);
  rightDrive.write(0);
  delay(250);
}
