void setup() {
  Serial.begin(9600);
  pinMode(3, INPUT_PULLUP);
}

boolean flag = false;

void loop() {
  boolean button = !digitalRead(3);
  if (button && !flag) {
    Serial.println("Ok");
  }
  flag = button;
}
