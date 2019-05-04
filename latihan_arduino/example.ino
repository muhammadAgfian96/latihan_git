int nilai=0;

void setup(){
    Serial.begin(9600);
    Serial.println("Mulaiiii...");
}

void loop(){
    if (Serial.available() > 0) {
            String tampung = Serial.readString();
    nilai = tampung.toInt();
    Serial.println(nilai);
    }
    digitalWrite(13, HIGH);
    delay(nilai);
    digitalWrite(13, LOW);
    delay(nilai);
}