int nilai=0;

void setup(){
    Serial.begin(9600);
    Serial.println("Mulaiiii...");
}

void loop(){
    nilai = nilai +1;
    Serial.println(nilai);
    delay(500);
}