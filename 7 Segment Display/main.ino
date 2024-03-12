void setup() {
  pinMode(2,OUTPUT);  //a
  pinMode(3,OUTPUT);  //b
  pinMode(4,OUTPUT);  //c
  pinMode(5,OUTPUT);  //d
  pinMode(6,OUTPUT);  //e
  pinMode(7,OUTPUT);  //f
  pinMode(8,OUTPUT);  //g

  Serial.begin(9600);
  while(!Serial){;}
}
//      digtlpin -   2 3 4 5 6 7 8
//      displaypin   a b c d e f g
int segment[10][7]={{1,1,1,1,1,1,0},  //0
                    {0,1,1,0,0,0,0},  //1
                    {1,1,0,1,1,0,1},  //2
                    {1,1,1,1,0,0,1},  //3
                    {0,1,1,0,0,1,1},  //4
                    {1,0,1,1,0,1,1},  //5
                    {1,0,1,1,1,1,1},  //6
                    {1,1,1,0,0,0,0},  //7
                    {1,1,1,1,1,1,1},  //8
                    {1,1,1,1,0,1,1}   //9
                   };


char ch;
int x=0;
void loop() {
  
  if(Serial.available()){
    ch=Serial.read();
  
  
  while(1){
  for(x=0;x<=6;x++){
    if(segment[(int)ch-48][x]==1)
      digitalWrite(x+2,HIGH);
    else
      digitalWrite(x+2,LOW);
      delay(200);
  }
  x=0;
  if(Serial.available()){
    ch=Serial.read();
    break;
  }
  }
}
}
