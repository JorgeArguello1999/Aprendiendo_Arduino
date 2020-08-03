/*

*/

// Variables globales

int btn1 = 8;

int btn2 = 7;

int indice = 3; // Iniciacion y asignacion de la variable del indice

int inc; // Iniciacion de la variable de incremento

int dec; // Iniciacion de la variable de decrecimiento

char arreglo[] = {'a','b','c','d','e','f','g','h'}; // Arreglo del alfabeto

void setup() {

pinMode(btn1, INPUT);

pinMode(btn2, INPUT);

Serial.begin(9600);

delay(2000);

}

void loop() {

// Se leen los botones

inc = digitalRead(btn1);

dec = digitalRead(btn2);

indice = indice + inc - dec; // El valor de indice aumenta cuando se presiona

// el boton 1 y disminuye cuando se presiona el boton 2

Serial.print(indice); // Se muestra el valor del indice en la serial para ver como cambia

Serial.print(" -> ");

Serial.println(arreglo[indice]);// Se muestra el elemento del arreglo correspondiente al indice

delay(500); // Un tiempo de espera para facilitar la visualizacion en la serial

}

/*

* Se debe notar que al aumentar el valor del indice, mas alla del numero de

* elementos que contiene el arreglo, en la serial se vera un valor incierto.

*/
