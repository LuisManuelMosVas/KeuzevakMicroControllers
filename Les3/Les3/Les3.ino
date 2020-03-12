
const int buzzer = 9;

void setup(){
  pinMode(buzzer, OUTPUT); 
}

void loop(){
  tone(buzzer, 7000); 
  delay(1000);       
  noTone(buzzer);     
  delay(750);        

  tone(buzzer, 4000);
  delay(1000);
  noTone(buzzer);
  delay(750);

  
  tone(buzzer, 8000);
  delay(1000);
  noTone(buzzer);
  delay(750);
}
