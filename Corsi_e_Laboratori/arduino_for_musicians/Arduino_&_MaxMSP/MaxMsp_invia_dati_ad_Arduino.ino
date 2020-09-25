

float ledPin = 9;   
void setup()
{
 Serial.begin(9600);
 pinMode(ledPin, OUTPUT);
}

void loop() {
  int luminosita;
  if (Serial.available()) {
  luminosita = Serial.read();
  analogWrite(ledPin, luminosita);
  }
}
