//Programa: Sensor de líquidos XKC-Y25-V com Arduino
//Autor: Arduino e Cia

#define pinobuzzer 7
#define pinosensor 5

int valor;

void setup()
{
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(5, INPUT_PULLUP);
}

void loop()
{
  //Faz a leitura do sensor de liquido
  valor = digitalRead(pinosensor);

  //Caso seja 0, aciona o buzzer
  if (valor <= 0)
  {
    digitalWrite(pinobuzzer, HIGH);
  }
  else
  {
    digitalWrite(pinobuzzer, LOW);
  }

  //Mostra o valor do sensor no Serial Monitor
  Serial.print("Sensor: ");
  Serial.println(valor);

  //Aguarda 200ms e repete o processo
  delay(200);
}