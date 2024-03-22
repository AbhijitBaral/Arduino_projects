#define echopin 4           //The digital pin number on arduino board which will recieve from module's echopin 
#define triggerpin 5        //The digital pin number on arduino board which will signal the trigger pin on module

long duration;    //Time taken by pulse to reach the reciever
long distance;    //Distance calculated using formula

void setup(){
  pinMode(triggerpin,OUTPUT);    
  pinMode(echopin,INPUT);        

  Serial.begin(9600);
  Serial.println("Distance measurement using arduino UNO");
  delay(500);
}

void loop(){
  digitalWrite(triggerpin,LOW);
  delayMicroSeconds(2);

  //A short 10 microseconds pulse is sent to module to start the ranging
  digitalWrite(triggerpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerpin,LOW);

  duration= pulseIn(echopin,HIGH);
  distance=duration*0.0344/2.0;

  Serial.print("Distance: ");
  Serial.print(distance);
  delay(100);
}
  
  
