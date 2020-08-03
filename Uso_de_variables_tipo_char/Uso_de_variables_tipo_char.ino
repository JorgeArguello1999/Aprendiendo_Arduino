char tab = 9;
char indice = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("Empecemos");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print((int)indice);
  Serial.print(tab);
  Serial.println(":");
  Serial.print(tab);
  delay(500);
  indice = indice + 1;
}
