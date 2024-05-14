/**************************
 * Edusesc Taguatinga *
 * Nome:Marcus vinicius *
 * Itinerario de Robotica *
 * ************************
 */
 const int LED = 13;
 void setup ( ) {
 pinMode (LED,OUTPUT); 
 }
 void loop( ) {
 digitalWrite (LED,LOW);
 delay (3000);//1 segundo = 1000ms
 digitalWrite (LED,HIGH);
 delay (3000);
 }
