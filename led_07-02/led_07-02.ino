//Declaração das variáveis que representam os pinos dos leds
int ledAmarelo = 8;
int ledVermelho = 9;
int ledVerde = 10;

void setup() {
  //Definindo os tipos de pinos
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);

  delay(1000);
}

void loop() {
  digitalWrite(ledAamrelo, HIGH);
  delay(1000);
  digitalWrite(ledAmarelo, LOW);
  delay(1000);

  
}
