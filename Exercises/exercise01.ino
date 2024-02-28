int button = 6;
int led_builtin = 4;

void setup () {
  pinMode(led_builtin, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop () {
	bool buttonState = false;
    buttonState = digitalRead(button);
  
  if (buttonState == true) {
    digitalWrite(led_builtin, 1);
    Serial.println(buttonState);
    return;
  }
  
  digitalWrite(led_builtin, 0);
  
  Serial.println(buttonState);

}