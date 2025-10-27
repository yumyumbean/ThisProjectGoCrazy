/* 
 * Project myProject
 * Author: Your Name
 * Date: 
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(SEMI_AUTOMATIC);

// Run the application and system concurrently in separate threads
SYSTEM_THREAD(ENABLED);
int PIN = D13;

void setup() {
pinMode(PIN, OUTPUT);

}


void loop() {
digitalWrite(PIN, HIGH);
delay(500);
digitalWrite(PIN, LOW);
delay(500);
}
