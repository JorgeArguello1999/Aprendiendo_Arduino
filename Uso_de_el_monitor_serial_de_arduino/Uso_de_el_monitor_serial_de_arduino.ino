int boton = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(8, INPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
  delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("El boton tiene valor");
  boton = digitalRead(8);
  Serial.println(boton);
  digitalWrite(11, boton);
  delay(500);
}
