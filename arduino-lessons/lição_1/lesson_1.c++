void setup()
{
  pinMode (8, OUTPUT);
  pinMode (7, OUTPUT);
}

void loop()
{
  digitalWrite (8, HIGH);
  delay (500);
  digitalWrite (8,LOW);
  delay (500);
  digitalWrite (7, HIGH);
  delay (500);
  digitalWrite (7,LOW);
  delay(500);
}