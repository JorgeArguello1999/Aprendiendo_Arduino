int boton = 1;
void setup() {
	// put your setup code here, to run once:
	pinMode(8, INPUT);
	pinMode(11, OUTPUT);
}

void loop() {
	// put your main code here, to run repeatedly:
	boton = digitalRead(8);
	digitalWrite(11, boton);
}
