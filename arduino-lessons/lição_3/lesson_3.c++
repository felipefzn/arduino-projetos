int potenciometro = A0;//int número inteiro 
int valor; //float vai aparecer o número com virgula
int valorCorrigido;//variável
int valortensao = A0;



void setup(){//comando basico
  Serial.begin (9600);
  pinMode (3, OUTPUT);//infomra que o pino 3 é saida
}

void loop(){
  valor = analogRead (potenciometro);//* 5.0/1023.0; //5, pq o máximo é 5 volts
  valorCorrigido = map (valor, 0, 1023, 0, 255);//quero que o valor de 0 a 1023, vá para de 0 a 255 (função map)
  analogWrite (3, valorCorrigido);
  Serial.print ("Valor Decimal Original = ");
  Serial.println (valor);//para aparecer o valor no serial ali embaixo
  Serial.print ("Valor Decimal Corrigido = ");
  Serial.println (valorCorrigido);
  Serial.print ("Valor Tensao = ");
  Serial.println (valortensao);
  Serial.println ("");
  delay(500);
}