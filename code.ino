#define left_motor_positive 7
#define left_motor_negative 6
#define right_motor_positive 4
#define right_motor_negative 5

int control_left = 2;
int control_right = 3;

void setup() {
  pinMode(left_motor_positive, OUTPUT);
  pinMode(left_motor_negative, OUTPUT);
  pinMode(right_motor_positive, OUTPUT);
  pinMode(right_motor_negative, OUTPUT);
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
  analogWrite(control_left, 100);
  analogWrite(control_right, 200);
}

void move_right(){
  move();
  analogWrite(control_left, 200);
  analogWrite(control_right, 100);
}

void stop(){
  move();
  analogWrite(control_left, 0);
  analogWrite(control_right, 0);
}

void loop() {}
