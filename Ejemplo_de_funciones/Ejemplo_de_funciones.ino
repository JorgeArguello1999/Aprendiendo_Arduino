void setup() {

Serial.begin(9600);

Serial.println("Empezamos!");

}

int a = -2;

int b = 3;

void loop() {

funcion_ejemplo(a++, b);

delay(1000);

}

void funcion_ejemplo(int x , int y) {

if (x > 0) {

Serial.println(2 * y);

}

else {

Serial.println(y);

}

}
