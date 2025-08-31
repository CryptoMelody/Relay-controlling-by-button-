int button = 4;
int relay = 7;
void setup(){
pinMode(relay, OUTPUT);
pinMode(button, INPUT);
}
void loop(){
  int buttonState = digitalRead(4);
  if(buttonState == LOW) {
        // pushbutton is pressed
        digitalWrite(7,HIGH); // turn on the relay
        
    } else {
        digitalWrite(7,LOW); // turn off the relay
    }
}