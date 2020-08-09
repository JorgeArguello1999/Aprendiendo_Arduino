int contador = 0;

boolean condicion;

void setup() {

// Inicializa la comunicacion serial

Serial.begin(9600);

delay(2000);

// Envia introduccion

Serial.println("\n\nEjemplo if");

Serial.println();

Serial.println("Empezamos!");

}

void loop() {

Serial.println(contador);

condicion = contador++ == 10;

if (condicion) {

Serial.println("Volvemos a empezar");

contador = 0;

}

delay(1000);

}
