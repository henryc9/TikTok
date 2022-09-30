float sinVal;     // Crea variable de tipo flotante
int tono;         // Crea variable de tipo entero
int val = 0;      // Crea variable de tipo entero con valor inicial 0
int sensor;       // Crea variable de tipo entero
float temp;       // Crea variable de tipo flotante
int suma;         // Crea variable de tipo entero

void setup(){
  Serial.begin(9600);       // Inicia la comunicación serial en 9600 baudios
  pinMode(8, OUTPUT);       // Degine el pin 8 como salida
  pinMode(10, OUTPUT);      // Degine el pin 10 como salida
  pinMode(11, OUTPUT);      // Degine el pin 11 como salida
}
 
void loop(){
  suma = 0;
  
  for (int i=0; i<5; i++){
    sensor = analogRead(A0);            // Lee el valor del sensor
    temp = ((sensor*5000.0)/1023)/10;
    suma = temp + suma;
    delay(500);
  }

  Serial.println (suma/5.0, 1);
  
  if (temp>35){
    for(int x=0; x<180; x++){
            sinVal = (sin(x*(3.1412/180)));
            tono = 2000+(int(tono*1000));
            tone(8, tono);
            delay(2); 
     }
     digitalWrite(10, HIGH);   
     digitalWrite(11, LOW);
  }
  else{
    tone (8,0, 1);
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
  }
}
