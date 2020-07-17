/*
 * Frederico Zile
 * fczile@gmail.com
 */
#include <Ultrasonic.h>
 Ultrasonic ultrassom(8,7); // passa (trigger,echo)

 void setup() {
 Serial.begin(9600); 
 
 }
 void loop()
 {
  float medida = ultrassom.Ranging(CM);
   Serial.print(medida);
   Serial.println("cm");
   delay(150);
 } 
