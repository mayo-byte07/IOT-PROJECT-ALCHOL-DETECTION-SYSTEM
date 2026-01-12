/*MQ-3 sensor with arduino.
  created by SriTu Tech team.
  Read the code below and use it for any of your creations.
  https://www.srituhobby.com/
*/
#define sensorDigital 2
#define LED 3
#define buzzer 4
#define sensorAnalog A1

void setup() {
  pinMode(sensorDigital, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  bool digital = digitalRead(sensorDigital);
  int analog = analogRead(sensorAnalog);

  Serial.print("Analog value : ");
  Serial.print(analog);
  Serial.print("\t");
  Serial.print("Digital value :");
  Serial.println(digital);

  if (digital == 0) {
    digitalWrite(LED, HIGH);
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(LED, LOW);
    digitalWrite(buzzer, LOW);
  }

}
