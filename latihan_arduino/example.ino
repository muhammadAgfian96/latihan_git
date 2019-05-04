int nilai=0;

void setup(){
    Serial.begin(9600);
    Serial.println("Mulaiiii...");
}

void loop(){
    String tampung = Serial.readString();
    nilai = tampung.toInt();
    Serial.println(nilai);
    digitalWrite(13, HIGH);
    delay(100);
    digitalWrite(13, LOW);
    delay(100);
}