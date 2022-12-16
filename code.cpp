#include <wiringPi.h>
#include <stdio.h>

const int motor1Pin1 = 0;  // Motor 1 pin 1
const int motor1Pin2 = 1;  // Motor 1 pin 2
const int enablePin1 = 2;  // Enable motor 1
const int motor2Pin1 = 3;  // Motor 2 pin 1
const int motor2Pin2 = 4;  // Motor 2 pin 2
const int enablePin2 = 5;  // Enable motor 2

void setup()
{
  wiringPiSetup();

  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(enablePin1, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);
  pinMode(enablePin2, OUTPUT);
}

void forward()
{
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
  digitalWrite(enablePin1, HIGH);
  digitalWrite(enablePin2, HIGH);
}

void backward()
{
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
  digitalWrite(enablePin1, HIGH);
  digitalWrite(enablePin2, HIGH);
}

void left()
{
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
  digitalWrite(enablePin1, HIGH);
  digitalWrite(enablePin2, HIGH);
}

void right()
{
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
  digitalWrite(enablePin1, HIGH);
  digitalWrite(enablePin2, HIGH);
}

void stop()
{
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, LOW);
  digitalWrite(enablePin1, LOW);
  digitalWrite(enablePin2, LOW);
}

int main(void)
{
  setup();

  // Move the car forward for 3 seconds
  forward();
  delay(3000);
  stop();

  // Move the car backward for 3 seconds
  backward();
  delay(3000);
  stop();

  // Turn the car left for 3 seconds
  left();
  delay(3000);
  stop();

  // Turn the car right for 3 seconds
  right();
  delay(3000);
  stop();

