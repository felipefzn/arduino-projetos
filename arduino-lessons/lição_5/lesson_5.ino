int Sens = 399;
int pino_leitura = A0;
int led_alarme = 2;
int led_normal = 3;
int leitura_analogica = 0;
  
 void setup()
{
 Serial.begin (9600);
 pinMode (pino_leitura, INPUT);
 pinMode (led_alarme, OUTPUT);
 pinMode (led_normal, OUTPUT);
 }

void loop()
{
  leitura_analogica = analogRead (pino_leitura);
  Serial.print ("Leitura do Pino A0 = ");
  Serial.println (leitura_analogica);
  
  if (analogRead(A0) <= 273){
    digitalWrite (led_alarme, LOW);
    digitalWrite (led_normal, HIGH);
  }else {
    digitalWrite (led_alarme, HIGH);
    digitalWrite (led_normal, LOW);  
  }
  
}