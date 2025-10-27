/* 
 * Project myProject
 * Author: Your Name
 * Date: 
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"
#include "Adafruit_GFX.h"
#include "Adafruit_SSD1306.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(SEMI_AUTOMATIC);

Adafruit_SSD1306 display(OLED_RESET);

const int disPIN = D18;

void setup() {
  Serial.begin(9600);
  waitFor(Serial.isConnected,10000);

 display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
}


void loop() {
    
}
