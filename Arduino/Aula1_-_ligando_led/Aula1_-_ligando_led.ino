/**************************
 * Edusesc Taguatinga *
 * Nome:Marcus vinicius *
 * Itinerario de Robotica *
 * ************************
 */
/*********
 * Edusesc Taguatinga      *
 * Professor: Wendell      *
 * Nome: Wendell Cruzeiro  *
 * Itinerário de robótica  *
 * *********
 */

// Declaração de Variáveis e Constantes
const int LED = 13;
int LDR = A0;


// Configurações
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(LDR, INPUT);
  Serial.begin(9600);
}
//Repetições
void loop() {
  int luz = analogRead(LDR);
  Serial.println(luz);

  if (luz > 100) {
    digitalWrite(LED, HIGH);
  } 
  else {
    digitalWrite(LED, LOW);
  }
}
