int pot = A0;
int valor;

void setup()
{
  Serial.begin (9600);
  pinMode (4, OUTPUT);//definir pino 4 como saida
  pinMode (A0, INPUT);//definir pino A0 como entrada   
}

void loop()
{
  valor = analogRead (pot);
  Serial.println (valor);
  Serial.print ("Valor Decimal = ");
  delay (1000);
  
  if (analogRead (A0) > 100){//se o valor do A0 for maior que 100
    digitalWrite (4, HIGH);//pino 4 receba 5V
  } else{ 
    digitalWrite (4, LOW);//Senão, apague o LED
  }
  delay(1000);
}