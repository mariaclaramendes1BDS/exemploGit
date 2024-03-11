void setup() {
  Serial.begin(9600);

}

void loop() {
  float sal, perc, aumento, novosal;

  //Recebendo o salario e o percentual
  Serial.println("Digite o salario do funcionario ");
  while (!Serial.available());
  sal = Serial.parseFloat();

  Serial.println("Digite o percentual de aumento: ");
  while (!Serial.available());
  perc = Serial.parseFloat();

  aumento = sal + perc / 100;

  novosal = sal + aumento;

  Serial.print("Valor de aumento e: ");
  Serial.println(aumento);
  Serial.print("Novo salario do funcionario e: ");
  Serial.println(novosal);

  delay(1000);

} 
