/*
* Projeto TCC (Trabalho conclusão de curso)
* Automação residencial
* Aluno Kleber Barcarollo
* @autor Kleber Barcarollo
* Curso Engenharia de Software
* Instituição Unicesumar
****************************************************
* Nesta parte do projeto é a qual eu utilizo o esp 32
* para ligar e desligar a luz da sala e da cozinha.
*
*/

void setup()
{
  luzsala(5, OUTPUT);
  luzcozinha(6, OUTPUT);
}

void loop()
{
  digitalWrite(5, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(6, LOW);  
}
