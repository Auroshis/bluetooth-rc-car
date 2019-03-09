int IP1 = 8;                // pin 2 on L293D IC
int IP2 = 9;                // pin 7 on L293D IC
int IP3 = 10;               // pin 15 on L293D IC
int IP4 = 11;     //PIN 10 ON L293D IC
int command;//to store data received from bluetooth using phone
void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(IP1, OUTPUT);
  pinMode(IP2, OUTPUT);
  pinMode(IP3, OUTPUT);
  pinMode(IP4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 if (Serial.available() > 0) {

    command = Serial.read();

   //stop(); Initialize with motors stoped.
 switch (command) {

      case 'F':

        forward();

        break;

      case 'B':

        back();

        break;

      case 'L':

        left();

        break;

      case 'R':

        right();

        break;
      case 'W':
       stop();
       break;  

  //    case 'G':

//        forwardleft();

  //      break;

    //  case 'I':

      //  forwardright();

        //break;

      //case 'H':

        //backleft();

        //break;

      //case 'J':

        //backright();

        //break;
}//end of switch statement
 }//end of if statement
}//end of void loop

void back()
{
digitalWrite(IP1,LOW);
digitalWrite(IP2,HIGH);
digitalWrite(IP3,LOW);
digitalWrite(IP4,HIGH); 
}
void forward()
{
  digitalWrite(IP1,HIGH);
digitalWrite(IP2,LOW);
digitalWrite(IP3,HIGH);
digitalWrite(IP4,LOW); 
}
void left()
{
   digitalWrite(IP1,HIGH);
digitalWrite(IP2,LOW);
digitalWrite(IP3,LOW);
digitalWrite(IP4,LOW); 
}
 void right()
 {
   digitalWrite(IP1,LOW);
digitalWrite(IP2,LOW);
digitalWrite(IP3,HIGH);
digitalWrite(IP4,LOW); 
 }

void stop()
{
   digitalWrite(IP1,LOW);
digitalWrite(IP2,LOW);
digitalWrite(IP3,LOW);
digitalWrite(IP4,LOW); 
}

