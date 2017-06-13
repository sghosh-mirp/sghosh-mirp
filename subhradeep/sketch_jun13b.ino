int Y1=A0;
int Y2 =A1;
int X1 =A2;
int X2 = A3;
void setup() {
  // open a serial connection
  Serial.begin(9600);
  // set the LED pin as an output
}

void loop(){
  pinMode(X1,OUTPUT);
  pinMode(X2,OUTPUT);
  pinMode(Y1,INPUT);
  pinMode(Y2,INPUT);
  
  digitalWrite(X1,HIGH);
  digitalWrite(X2,LOW);
 
  float y1= analogRead(Y1);
  Serial.println(y1);
  delay(40);
}

