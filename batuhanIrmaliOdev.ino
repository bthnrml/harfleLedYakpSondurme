void setup() {
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
Serial.begin(9600);
}

void loop() {
  while(Serial.available()>0){
    char okunanKarakter = Serial.read();
      switch(okunanKarakter){
      case 'g':
      digitalWrite(4,HIGH);
      Serial.println('LED1 YAKILDI');
      break;
      case 'b':
      digitalWrite(4,LOW);
      Serial.println('LED1 SÖNDÜRÜLDÜ');
      break;
      case 'h':
      digitalWrite(5,HIGH);
      Serial.println('LED2 YAKILDI');
      break;
      case 'n':
      digitalWrite(5,LOW);
      Serial.println('LED2 SÖNDÜRÜLDÜ');
      break;
      case 'j':
      digitalWrite(6,HIGH);
      Serial.println('LED3 YAKILDI');
      break;
      case 'm':
      digitalWrite(6,LOW);
      Serial.println('LED3 SÖNDÜRÜLDÜ');
      break;
      }
  }
}
