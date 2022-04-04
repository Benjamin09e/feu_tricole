int ledVerte=8 ,ledJaune=9 , ledRouge=10;
void setup() {
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);

}

void loop() {
  // Lampe Verte
digitalWrite(8,HIGH);
delay(5000);
digitalWrite(8,LOW);

// Lampe Jaune
digitalWrite(9,HIGH);
delay(2000);
digitalWrite(9,LOW);

// Lampe Rouge
digitalWrite(10,HIGH);
delay(5000);
digitalWrite(10,LOW);

}
