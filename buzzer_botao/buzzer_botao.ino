//constante para o pino da buzzer
#define  botao 8
#define buzina 2 
int led = 4;
bool status = false;

void setup() {
  Serial.begin(9600);
  pinMode(botao, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzina, OUTPUT);
  delay(1000); //parada estratégica
}

void loop() {
  Serial.println(digitalRead(botao));

  if(digitalRead(botao) == 1 && status == false) {
    status = true;
    tone(buzina, 523); // Liga a buzina, Tom (Dó)
    digitalWrite(led, HIGH);

}
  else if (digitalRead(botao) == 1 && status == true) {
    status = false;
    noTone(buzina); //Desliga a buzina
    digitalWrite(led, LOW);
  }
  delay(1000);
}

