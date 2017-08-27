/*
Pin 13-Green LED
Pin 12-Red LED
Pin 11-Buzzer
Pin 4- LAZER
*/
void setup() {
pinMode(4, OUTPUT);
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
}

void loop(){
digitalWrite(4, HIGH);
if(analogRead(1) < 450){
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
} else{
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
delay(1000*10);
}
}

