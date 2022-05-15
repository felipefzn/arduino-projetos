int celsius;
int sensor = A0;
  
 void setup()
{
 Serial.begin (9600);
   pinMode (4, OUTPUT);
  pinMode (A0, INPUT);
 }

void loop()
{
  sensor = analogRead (A0);
  celsius = map (((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125);
  Serial.println (celsius);
  Serial.print ("Temperatura = ");
  delay (1000);
  
  if (analogRead (A0) >= 225){
    digitalWrite (4, HIGH);
  } else{ 
    digitalWrite (4, LOW);
  }
  
}
