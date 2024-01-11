int ldrPin = A0;
int led = 7;
int led1 = 6;
int threshold = 70;
void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(led1, OUTPUT);
}
void loop()
{
  int data = analogRead(ldrPin);
  Serial.println("");
  Serial.print("Light Sensor ");
  Serial.print("Value = ");
  Serial.print(data);
  if(data <= threshold)
  {
    digitalWrite(led, HIGH);
    digitalWrite(led1, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
    digitalWrite(led1, LOW);
  }
}