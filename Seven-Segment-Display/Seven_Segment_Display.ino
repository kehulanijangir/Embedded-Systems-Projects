void setup()
{
    for(int i=3;i<=13;i++)
    {pinMode(i,1);
    }
 
    
  }
  


void loop()
{
  for(int i=3;i<=10;i++)
  {digitalWrite(i,1);
   delay(1000);
  }
  for(int i=3;i<=10;i++) 
  {digitalWrite(i,0);
  delay(500);
  }
    }
  
  
 
 
  
  
  
  
  