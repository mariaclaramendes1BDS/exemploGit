//Definição das constantes: pinos de entrada
#define pinoBuzzer 2

//leds
#define pinoDo 3
#define pinoRe 4
#define pinoMi 5
#define pinoFa 6
#define pinoSo 7
#define pinoLa 8
#define pinoSi 9
#define pinoDo2 10

byte Doh, Re, Mi, Fa, So, La, Si, Doh2 = 0;


void setup() {
  pinMode(pinoBuzzer, OUTPUT);

  pinMode(pinoDo, INPUT);
  pinMode(pinoRe, INPUT);
  pinMode(pinoMi, INPUT);
  pinMode(pinoFa, INPUT);
  pinMode(pinoSo, INPUT);
  pinMode(pinoLa, INPUT);
  pinMode(pinoSi, INPUT);
  pinMode(pinoDo2, INPUT);

  Serial.begin(9600);
  delay(1000);
}

void loop() {
  //Leitura dos botoes armazdnada nas variaveis de controle
  Doh = digitalRead(pinoDo);
  Re = digitalRead(pinoRe);
  Mi = digitalRead(pinoMi);
  Fa = digitalRead(pinoFa);
  So = digitalRead(pinoSo);
  La = digitalRead(pinoLa);
  Si = digitalRead(pinoSi);
  Doh2 = digitalRead(pinoDo2);


  //verificando qual nota foi acionada
  if (Doh == 1) {
    //Ativa a nota dó
    tone(pinoBuzzer, 523);
  } else if (Re == 1) {
    //Ativa a nota ré
    tone(pinoBuzzer, 587);
  } else if (Mi == 1) {
    //Ativa a nota mi
    tone(pinoBuzzer, 659);
  } else if (Fa == 1) {
    //Ativa a nota fa
    tone(pinoBuzzer, 698);
  } else if (So == 1) {
    //Ativa a nota so
    tone(pinoBuzzer, 392);
  } else if (La == 1) {
    //Ativa a nota La
    tone(pinoBuzzer, 440);
  } else if (Si == 1) {
    //Ativa a nota Si
    tone(pinoBuzzer, 494);
  } else if (Doh2 == 1) {
    //Ativa a nota do2
    tone(pinoBuzzer, 554);
  } else {
    //Desliga a buzzer
    noTone(pinoBuzzer);
  }
  delay(50);  //tempo de execução da nota musical
}
