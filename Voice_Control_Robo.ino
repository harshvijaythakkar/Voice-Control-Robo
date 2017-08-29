#define LM1 10
#define LM2 11
#define RM1 12
#define RM2 13

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("connection enabled");
  pinMode(LM1, OUTPUT);
  pinMode(LM2, OUTPUT);
  pinMode(RM1, OUTPUT);
  pinMode(RM2, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    int c = Serial.read();
    Serial.println(c);
  //CONDITION FOR FORWARD
  if(c == 1)
  {
    digitalWrite(LM1,HIGH);
    digitalWrite(LM2,LOW);
    digitalWrite(RM1,HIGH);
    digitalWrite(RM2,LOW);
    delay(2000);
  }
    
    //CONDITION FOR REVERSE
  if(c == 2)
  {
    digitalWrite(LM1,LOW);
    digitalWrite(LM2,HIGH);
    digitalWrite(RM1,LOW);
    digitalWrite(RM2,HIGH);
    delay(2000);
  }
  
    //CONDITION FOR LEFT
  if(c == 3)
  {
    digitalWrite(LM1,LOW);
    digitalWrite(LM2,HIGH);
    digitalWrite(RM1,HIGH);
    digitalWrite(RM2,LOW);
    delay(2000);
  }
  
  //CONDITION FOR RIGHT
  if(c == 4)
  {
    digitalWrite(LM1,HIGH);
    digitalWrite(LM2,LOW);
    digitalWrite(RM1,LOW);
    digitalWrite(RM2,HIGH);
    delay(2000);
  }
  
  //CONDITION FOR STOP
  if(c == 5)
  {
    digitalWrite(LM1,LOW);
    digitalWrite(LM2,LOW);
    digitalWrite(RM1,LOW);
    digitalWrite(RM2,LOW);
    delay(2000);
  } 
 }
}
