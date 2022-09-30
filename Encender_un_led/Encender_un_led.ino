void setup() {
  pinMode (5, OUTPUT);      // Define el pin 5 como salida
}

void loop() {
  digitalWrite (5, HIGH);   // Enciende el LED conectado en el pin digital 5
  delay(500);               // Tiempo de espera 500 milisegundos
  digitalWrite (5, LOW);    // Apaga el LED conectado en el pin digital 5
  delay(500);               // Tiempo de espera 500 milisegundos
}
