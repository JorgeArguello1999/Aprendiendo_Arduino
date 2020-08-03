/*

Esta experiencia pretende mostrar el uso de variables. El tiempo de encendido/apagado del led

se almacena en una variable, la cual puede ser cambiada por las entradas de los botones.

*/

// Variables globales

int btn1 = 8;

int btn2 = 7;

int ledpin = 11;

int tmpo = 500; // Iniciacion y asignacion de la variable del tiempo

int inc; // Iniciacion de la variable de incremento

int dec; // Iniciacion de la variable de decrecimiento

void setup() {

pinMode(ledpin, OUTPUT);

pinMode(btn1, INPUT);

pinMode(btn2, INPUT);

Serial.begin(9600);

delay(2000);

}

void loop() {

inc = digitalRead(btn1); // inc toma el valor del pin btn1

dec = digitalRead(btn2); // dec toma el valor del pin btn2

tmpo = tmpo + 50*inc - 50*dec; // El valor de tmpo se modifica

Serial.println(tmpo); // Se imprime el valor de tmpo

//Encendido y apagado del LED

digitalWrite(ledpin, HIGH);

delay(tmpo);

digitalWrite(ledpin, LOW);

delay(tmpo);

}
