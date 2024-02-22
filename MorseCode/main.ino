
int ledpin=12;

char* letters[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..",
                 "--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-",
                 "-.--","--.."};

char* numbers[]={"-----",".----","..---","...--","....-",".....","-....","--...","---..",
                 "----."};

int space=200,dit=200,dah=600;

void setup() {
  pinMode(ledpin,OUTPUT);
  Serial.begin(9600);
}

void flash(char morse){
  digitalWrite(ledpin,HIGH);
  if(morse=='.'){
    delay(dit);
  }
  else{
    delay(dah);
  }
  digitalWrite(ledpin,LOW);
  delay(space);
}

void word(char *sequence){
  int i=0;
  while(sequence[i]!=NULL){
    flash(sequence[i]);
    i++;
  }
  delay(3*space);
}


void loop() {
  char ch;
  if(Serial.available()){
    ch=Serial.read();
    if(ch>='a' && ch<= 'z')
      word(letters[ch-'a']);
    else if(ch>='A' && ch<='Z')
      word(letters[ch-'A']);
    else if(ch>='0'&&ch<='9')
      word(numbers[ch-'0']);
    else if(ch==' ')
      delay(7*space);
  }
}
