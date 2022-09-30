int botonA = 2;       // Asigna como nombre "botonA" al pin digital 2
int botonR = 11;      // Asigna como nombre "botonR" pin digital 11 
int ledA = 3;         // Asigna como nombre "ledA" pin digital 3
int ledR = 10;        // Asigna como nombre "ledR" pin digital 10

void setup() {
  pinMode (botonA, INPUT);    // Define el boton "BotonA" como entrada
  pinMode (botonR, INPUT);    // Define el boton "BotonR" como entrada
  pinMode (ledA, OUTPUT);     // Define el boton "ledA" como salida
  pinMode (ledR, OUTPUT);     // Define el boton "ledR" como salida
  Serial.begin (9600);        // Inicia la comunicación serial en 9600 baudios
}

void loop() {
  int estadoA = digitalRead (botonA);  // Lee el estado de BotonA
  int estadoR = digitalRead (botonR);  // Lee el estado de BotonR

  while (estadoA == 0) {
    digitalWrite (ledA, HIGH);         // Enciende ledA
    Serial.println ("Led Azul Encendido");
    break;
  }
  digitalWrite (ledA, LOW);           // Apaga ledA

  while (estadoR == 0) {
    digitalWrite (ledR, HIGH);        //Enciende ledR
    Serial.println ("Led Rojo Encendido");
    break;
  }
  digitalWrite (ledR, LOW);           // Apaga ledR
}
