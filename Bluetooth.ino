void setup() {
  Serial.begin(9600);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
 // put your setup code here, to run once:

}

void loop() {
 if(Serial.available()>0)
 {
  char data=Serial.read();
  switch (data)
   {
    case 'd' : {
      digitalWrite(5,HIGH);
      digitalWrite(6,LOW );   //FORWARDD
      digitalWrite(7,HIGH);
      digitalWrite(8,LOW); 
      }
     break;
    case 'b' : {
      digitalWrite(5,LOW);
      digitalWrite(6,HIGH);   //HARD RIGHT
      digitalWrite(7,HIGH);
      digitalWrite(8,LOW);
      }
     break;
    case 'e' : {
      digitalWrite(5,LOW);
      digitalWrite(6,HIGH);   //BACKWARD
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
       }
      break;
     case 'c'  : {
      digitalWrite(5,HIGH);
      digitalWrite(6,LOW);   //HARD LEFT
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);  
       }
     break;
     case 'a' : {
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);   //STOP
      digitalWrite(7,LOW);
      digitalWrite(8,LOW); 
       }
     break;
    default : break;
    
   }
    // put your main code here, to run repeatedly:
 Serial.println(data);
 }
delay(100);
}// put your setup code here, to run once:



