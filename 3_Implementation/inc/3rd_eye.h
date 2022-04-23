#define trigPin 12
#define echoPin 11
int Buzzer = 8; 
int duration, distance; 

void setup() {
        Serial.begin (9600); 
    
        pinMode(trigPin, OUTPUT); 
        pinMode(echoPin, INPUT);
        pinMode(Buzzer, OUTPUT);
     
}

void loop() {

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(1000);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = (duration/2) / 29.1;

  if (distance <= 100 && distance >= 70) 
        {
         Serial.println("object detected \n");
        Serial.print("distance= ");
        analogWrite(Buzzer,0);
        delay (500) ;
        analogWrite(Buzzer,255);
        delay (5000) ;
        
        
  
        }

         else if (distance <= 80 && distance >= 50) 
        {
         Serial.println("object detected \n");
        Serial.print("distance= ");  
        analogWrite(Buzzer,0);
        delay (450) ;
        analogWrite(Buzzer,255);
        delay (450) ;
        
        
  
        }

         else if (distance <= 50 && distance >= 30) 
        {
         Serial.println("object detected \n");
        Serial.print("distance= ");  
        analogWrite(Buzzer,0);
        delay (250) ;
        analogWrite(Buzzer,255);
        delay (250) ;
        
        
  
        }
           else if (distance <= 30 && distance >= 20) 
        {
         Serial.println("object detected \n");
        Serial.print("distance= ");  
        analogWrite(Buzzer,0);
        delay (150) ;
        analogWrite(Buzzer,255);
        delay (150) ;
        
        }

            else if (distance <= 20 && distance >= 10) 
        {
         Serial.println("object detected \n");
        Serial.print("distance= ");  
        analogWrite(Buzzer,0);
        delay (100) ;
        analogWrite(Buzzer,255);
        delay (100) ;
        
        
  
        }

        else if (distance <= 10 && distance > 5) 
        {
         Serial.println("object detected \n");
        Serial.print("distance= ");  
        analogWrite(Buzzer,0);
        delay (50) ;
        analogWrite(Buzzer,255);
        delay (50) ;
        
        
  
        }

        else if (distance <= 5 && distance >= 1) 
        {
         Serial.println("object detected \n");
        Serial.print("distance= ");  
        analogWrite(Buzzer,0);
        delay (10) ;
        analogWrite(Buzzer,255);
        delay (10) ;
        
        
  
        }
        

  else 
      Serial.println("object detected \n");
        Serial.print("distance= ");              
        Serial.print(distance);        
        analogWrite(Buzzer,255);
  {
}
}
