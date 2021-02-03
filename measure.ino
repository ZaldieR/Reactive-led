void measure() {  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(15);
  digitalWrite(trigPin, LOW);
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  dist = (duration/2) / 29.1;
}

void test_measure() {
  for (int i=0;i<=2;i++) {   
    measure();               
    aver[i]=dist;            
    delay(25);           
  }
}
