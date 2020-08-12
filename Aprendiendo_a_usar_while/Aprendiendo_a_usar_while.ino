int mi_numero = 0;

void setup() {

// Inicializa la comunicacion serial

Serial.begin(9600);

// Envia introduccion

Serial.println("\n\nEjemplo while");

Serial.println();

Serial.println("Empezamos!");

}

void loop() {

while (mi_numero++ < 10) {

Serial.println(mi_numero);

delay(1000);

}

Serial.println("Volvemos a empezar");

mi_numero = 0;

delay(1000);

}
