/*
* Projeto TCC (Trabalho conclusão de curso)
* Automação residencial
* Aluno Kleber Barcarollo
* @autor Kleber Barcarollo
* Curso Engenharia de Software
* Instituição Unicesumar
****************************************************
* Nesta parte do projeto 
*
*/

int sensorPin = A0; // Aqui o pino de entrada para LDR
int sensorValue = 0; // variável para armazenar a luminosidade neste caso está em zero
void setup() {
Serial.begin(9600); // define porta serial para comunicação
}

void loop() {
sensorValue = analogRead(sensorPin); // Aqui ele le o valor do sensor
Serial.println(sensorValue); // imprime os valores de entrada a partir do sensor no Serial Mode
delay(100); // Espera 
}

