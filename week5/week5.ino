int ledPin = 7; // ledPin을 9번으로 정의

void setup() {
  pinMode(ledPin, OUTPUT);    //ledPin을 출력으로 설정
}

void loop() {
  digitalWrite(ledPin, HIGH); //LED ON
  delay(3000);                //1초 대기
  digitalWrite(ledPin, LOW);  //LED OFF
  delay(3000);                //1초 대기
}
