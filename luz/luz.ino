# define PULSADOR 2
# define BUZZER_ACTIVO 8

void setup() {
  pinNode (PULSADOR, IMPUT_PULLIP);
  pinNode (BUZZER_ACTIVO, OUTPUT);
}
void loop() {
  if (digitaRead(PULSADOR)== LOW){
    for (int i=0;i<5; i++){
      digitalWrite(BUZZER_ACTIVO, HIGH);
      delay(500);
      digitalWrite(BUZZER_ACTIVO,LOW);
      delay(500);
    }
  }
}
