#include <Servo.h>

#define left_motor_positive 7
#define left_motor_negative 6
#define right_motor_positive 4
#define right_motor_negative 5
#define servo 8

int control_left = 2;
int control_right = 3;

int angle = 0;
Servo Servo;

void setup() {
  pinMode(left_motor_positive, OUTPUT);
  pinMode(left_motor_negative, OUTPUT);
  pinMode(right_motor_positive, OUTPUT);
  pinMode(right_motor_negative, OUTPUT);
  Servo.attach(servo);
  Servo.write(angle);
}

void move(){
  digitalWrite(left_motor_positive, HIGH);
  digitalWrite(left_motor_negative, LOW);
  digitalWrite(right_motor_positive, HIGH);
  digitalWrite(right_motor_negative, LOW);
}

void move_forward(){
  move();
  analogWrite(control_left, 200);
  analogWrite(control_right, 200);
}

void move_left(){
  move();
  analogWrite(control_left, 150);
  analogWrite(control_right, 200);
}

void move_right(){
  move();
  analogWrite(control_left, 200);
  analogWrite(control_right, 150);
}

void stop(){
  move();
  analogWrite(control_left, 0);
  analogWrite(control_right, 0);
}

void servo_down() {
  Servo.write(90);
}

void servo_up() {
  Servo.write(0);
}

void loop(){
  move_forward();
  delay(5000);
  stop();
  servo_down();
  delay(1000);
  servo_up();
}
