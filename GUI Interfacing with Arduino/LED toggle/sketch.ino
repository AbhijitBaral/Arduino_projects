char userInput;   //Character recieved through Serial port that toggles the LED

void setup(){
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop(){
  if(Serial.available() > 0){

    userInput = Serial.read();

    if(userInput == 'o'){
      digitalWrite(LED_BUILTIN, HIGH);
    }

    if(userInput == 'x'){
      digitalWrite(LED_BUILTIN, LOW);
    }
  }
}
  
