void setup()
{
    pinMode(10,1);
   pinMode(9,1);
   pinMode(6,1);
   pinMode(5,1);
    pinMode(A0,0);
   pinMode(A1,0);
    
  }
  


void loop()
{
 if(digitalRead(A0)==1)
 {digitalWrite(10,1);
  digitalWrite(9,0);
  digitalWrite(6,0);
 }
 
  else if(digitalRead(A1)==1)
  {digitalWrite(10,0);
  digitalWrite(6,1);
  digitalWrite(9,0);
  }
 
  else
  {digitalWrite(10,0);
  digitalWrite(6,0);
  digitalWrite(9,0);
  
    }}
  
  
 
 
  
  