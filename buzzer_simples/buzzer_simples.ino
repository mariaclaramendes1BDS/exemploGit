//constante para o pino da buzzer
#define pinoBuzzer 2
int ledVermelho = 3;

void setup() {
  Serial.begin(9600);
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  delay(1000); //parada estratégica
}

void loop() {
 tone(pinoBuzzer, 523); //Nota musical dó
 digitalWrite(ledVermelho, HIGH);
 delay(1000);
 noTone(pinoBuzzer); //desliga a buzzer
 digitalWrite(ledVermelho, LOW); //apaga o LED
 delay(1000);

}
