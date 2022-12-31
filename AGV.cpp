//Programação do AGV

#define MotorR 9
#define MotorL 5
#define sensorL A2
#define sensorR A3
void setup() {
pinMode(MotorL, OUTPUT);
pinMode(MotorR, OUTPUT);
pinMode(sensorL,INPUT);
pinMode(sensorR,INPUT);

}

void loop() {
int left = analogRead(sensorL);
int right = analogRead(sensorR);

if (left > 100 && right > 100){
  digitalWrite(MotorL, HIGH);
  digitalWrite(MotorR, LOW);
  delay(50);
  digitalWrite(MotorL, LOW);
  digitalWrite(MotorR, HIGH);
  delay(50);
}
  else{
    if (left < 100 && right > 100){
      digitalWrite(MotorL, HIGH);
      digitalWrite(MotorR, LOW);
    }
      else{
        if (left > 100 && right < 100){
          digitalWrite(MotorL, LOW);
          digitalWrite(MotorR, HIGH);
      }
        else{
          if (left < 100 && right < 100){
            digitalWrite(MotorL, LOW);
            digitalWrite(MotorR, HIGH);
          }
        }
  }
}
}
