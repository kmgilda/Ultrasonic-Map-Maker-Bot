#include <Servo.h>
#include <NewPing.h>

#define rightWheeltwo 3
#define leftWheeltwo 6
#define rightWheelseven 4
#define leftWheelseven 7 
//#define leftEnable 2
//#define rightEnable 5
#define TRIGGER_PIN  12 
#define ECHO_PIN     11  
#define MAX_DISTANCE 200

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); 
Servo myservo;  

int pos = 0;   
int it = 10;

void setup() {
  myservo.attach(9); 
  Serial.begin(9600);
  pinMode(leftWheeltwo, OUTPUT);
  pinMode(rightWheeltwo, OUTPUT);
  pinMode(leftWheelseven, OUTPUT);
  pinMode(rightWheelseven, OUTPUT); 
  delay(3000);
}

void loop() {
    
  int i = 0;
  int t = 0;
  int a = 0;
  int z = 0;
  int m = 0;


  
 for (i = 0; i < 4; i++)
 {
  myservo.write(0);
  delay(1000);
  unsigned int back = sonar.ping();
  myservo.write(180);
  delay(1000);
  unsigned int front = sonar.ping();
  
  if ((front > back) || front == 0)
    {
         
        digitalWrite(leftWheeltwo, HIGH);
        digitalWrite(leftWheelseven, LOW);
        digitalWrite(rightWheeltwo, HIGH);      
        digitalWrite(rightWheelseven, LOW);
        delay(1000);
    }
  else
    {
      
        digitalWrite(leftWheeltwo, LOW);
        digitalWrite(leftWheelseven, HIGH);
        digitalWrite(rightWheeltwo, LOW);      
        digitalWrite(rightWheelseven, HIGH);   
        delay(1000);
    }

        digitalWrite(leftWheeltwo, LOW);
        digitalWrite(leftWheelseven, LOW);
        digitalWrite(rightWheeltwo, LOW);      
        digitalWrite(rightWheelseven, LOW);   

  
  myservo.write(90);
  delay(1000);
  unsigned int right = sonar.ping();
  myservo.write(180);
  delay(1000);
  {
      digitalWrite(rightWheeltwo, HIGH);
        digitalWrite(rightWheelseven, LOW);
        delay(1000);
   
  }
  unsigned int left = sonar.ping();
  if (right > left)
    {
          
        digitalWrite(leftWheeltwo, HIGH);
        digitalWrite(leftWheelseven, LOW);
        delay(1000);
           
        digitalWrite(leftWheeltwo, HIGH);
        digitalWrite(leftWheelseven, LOW);
        digitalWrite(rightWheeltwo, HIGH);      
        digitalWrite(rightWheelseven, LOW);
        delay(500);
      
        digitalWrite(rightWheeltwo, HIGH);
        digitalWrite(rightWheelseven, LOW);
        delay(600);
      
  
    }
  else
     {
   
      
        digitalWrite(leftWheeltwo, HIGH);
        digitalWrite(leftWheelseven, LOW);
        digitalWrite(rightWheeltwo, HIGH);      
        digitalWrite(rightWheelseven, LOW);
        delay(500);
      
        digitalWrite(leftWheeltwo, HIGH);
        digitalWrite(leftWheelseven, LOW);
        delay(600);  
        
}
        digitalWrite(leftWheeltwo, LOW);
        digitalWrite(leftWheelseven, LOW);
        digitalWrite(rightWheeltwo, LOW);      
        digitalWrite(rightWheelseven, LOW);
    
    
 }  

 
  
  for (i = 0; i < 180; i ++)
  {
    unsigned int uS = sonar.ping();
    myservo.write(i);
    delay(20);
    for (t = 0; t < it; t++)
    {
      uS = sonar.ping();
      a = uS/US_ROUNDTRIP_CM + a;
      delay(30);
    }
    
    a = a / (it-1);
    t = 0;

    Serial.println(a); 
    a = 0;
  } 
  }
