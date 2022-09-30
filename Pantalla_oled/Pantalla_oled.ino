#include <Wire.h>              // libreria para bus I2C
#include <SPI.h>               // libreria para bus ISP
#include <Adafruit_GFX.h>      // libreria para pantallas graficas
#include <Adafruit_SSD1306.h>  // libreria para controlador SSD1306

Adafruit_SSD1306 display = Adafruit_SSD1306(128, 64, &Wire);

void setup(){
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // Inicializa la pantalla
  display.clearDisplay();                    // Limpia la pantalla
  display.setTextColor(SSD1306_WHITE);       // Define el color del texto
}

void loop(){
  display.clearDisplay();     // Limpia la pantalla
  display.setTextSize(3);     // Define el tamaño del texto
  display.setCursor(30,10);   // Coloca el cursor para escribir
  display.print ("Hola");     // Escribe el texto que deseas
  display.setCursor(20,35);   // Coloca el cursor para escribir
  display.print ("Mundo");    // Escribe el texto que deseas
  display.display();          // Permite actualizar la pantalla
  delay(1000);                // Tiempo 

  display.clearDisplay();         
  display.setTextSize(2);       
  display.setCursor(0,5);
  display.print ("Esto es");
  display.setCursor(0,25);
  display.print ("un display");
  display.setCursor(0,45);
  display.print ("OLED");
  display.display();
  delay(2000);

  display.clearDisplay();          
  display.setTextSize(2);            
  display.setCursor(20,5);
  display.print ("Sigueme");
  display.setCursor(15,25);
  display.print ("para mas");
  display.setTextSize(1);             
  display.setCursor(0,45);
  display.print ("TikTok: eldavicho_ec");
  display.setCursor(0,55);
  display.print ("Instagram: henry_9c");
  display.display();
  delay(2000);
}
