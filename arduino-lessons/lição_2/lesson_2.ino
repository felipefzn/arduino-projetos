void setup()
{
  pinMode (10, OUTPUT);//pinmode é para determinar qual pino vai ser saida, ou entrada
  pinMode (6, INPUT);
  pinMode (11, OUTPUT);
}

void loop()
{
  if (digitalRead (6) == HIGH){ //se o pino 6 for Alto, o digital write transforma o 10 para Alto também
    digitalWrite (10, HIGH);
    delay (500);
    digitalWrite (10, LOW);
    digitalWrite (11, HIGH);
    delay (500);
    digitalWrite (11, LOW);
  }else {
    digitalWrite (10, LOW);
    digitalWrite (11, LOW);
   
  }
}