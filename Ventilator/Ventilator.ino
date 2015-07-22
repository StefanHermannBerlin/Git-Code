int motor_A = 5;
int motor_B = 6;
int motor_Speed = 3;

float tempC;
int reading;
int tempPin = 0;

int cpuCoolingThreshold = 28;

void setup()
{
  analogReference(INTERNAL);
  Serial.begin(9600);

  pinMode(motor_A, OUTPUT);
  pinMode(motor_B, OUTPUT);
}

void loop()
{
  reading = analogRead(tempPin);
  tempC = reading / 9.31;
  Serial.println(tempC);

  if (tempC > cpuCoolingThreshold) {
    digitalWrite(motor_A, HIGH);
    digitalWrite(motor_B, LOW);
    analogWrite(motor_Speed, 255);
  } else {
    digitalWrite(motor_A, LOW);
    digitalWrite(motor_B, LOW);    
    analogWrite(motor_Speed, 0);
  }

}
