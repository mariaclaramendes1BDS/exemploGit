void setup() {
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  float salario, novoSalario;
  
   Serial.println("Digite o salario:");
   while (!Serial.available()); 
   salario = Serial.parseFloat();
   Serial.println(salario);
   
   novoSalario = salario * 1.25;
   Serial.print("O novo salario com aumento de 25% e: ");
   Serial.println(novoSalario);

   delay(5000);

   }
   
