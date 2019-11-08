void setup() {
 pinMode(10, OUTPUT);//led verde no pino 10
 pinMode(9, OUTPUT);//led vermelho no pino 9
}

void loop() {
  digitalWrite(10, HIGH);//led verde liga
  digitalWrite(9, LOW);//led vermelho desliga
  delay(500);//pausa de meio seg pq ta em milisegundo
  
  digitalWrite(10, LOW);//led verde desliga
  digitalWrite(9, HIGH);//led vermelho liga
  delay(500);//pausa de meio seg pq ta em milisegundo
}
