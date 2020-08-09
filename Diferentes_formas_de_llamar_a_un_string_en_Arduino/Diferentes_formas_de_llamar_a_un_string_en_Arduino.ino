void setup() {

// Inicializa comunicacion serial

Serial.begin(9600);

delay(2000);

// Envia introduccion

Serial.println("\nEjemplo funcion String()\n");

//Inicializacion directa

String str1 = "Inicializacion directa";

Serial.println(str1);

//Funcion String: String como input

String str2 = String("Inicializacion con String()");

Serial.println(str2);

//Funcion String: char como input

String str3 = String('a');

Serial.println(str3);

//Funcion String: int como input

String str4 = String(13);

Serial.println(str4);

//Concatenacion de Strings

String str5 = String(str3+" y "+str4);

Serial.println(str5);

}

void loop() {

}
