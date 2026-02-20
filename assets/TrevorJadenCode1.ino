void setup() {
  #define IN3 6
  #define IN4 5
  
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);// put your setup code here, to run once:
}

void loop() {
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

}
