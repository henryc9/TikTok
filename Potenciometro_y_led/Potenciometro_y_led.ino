void setup() {
  pinMode (11, OUTPUT);     // Define el pin 11 como salida
  Serial.begin(9600);       // Inicia la comunicación serial en 9600 baudios
}

void loop() {
  int valor = analogRead (A0);   // Lee el valor del potenciometro
  map (valor, 0, 1023, 0, 255);  // Mapea del valor del potenciometro (de 0-1023 pasa a 0-255) para encender el LED de forma gradual
  
  if (valor/4 >= 200){
    Serial.print ("Valor: ");
    Serial.print (valor/4);
    Serial.println ("     LED: encendido");
  }

  if (valor/4 >= 20 && valor/4 < 200){
    Serial.print ("Valor: ");
    Serial.print (valor/4);
    Serial.println ("     LED: encendido a medias");
  }

    if (valor/4 > 5 && valor/4 < 20){
    Serial.print ("Valor: ");
    Serial.print (valor/4);
    Serial.println ("     LED: casi apagado");
  }

    if (valor/4 >= 0 && valor/4 < 5){
    Serial.print ("Valor: ");
    Serial.print (valor/4);
    Serial.println ("     LED: apagado");
  }

  analogWrite (11, valor/4);  // Enciende el LED de forma gradual y de acuerdo al valor del potenciometro
}
