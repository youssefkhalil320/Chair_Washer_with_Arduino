int pump1 = 2;    // Definig the pin of the relay connected to the first water pump

int pump2 = 8;   // Definig the pin of the relay connected to the second water pump

 

void setup(){
  
pinMode(pump1,OUTPUT);    
pinMode(pump2,OUTPUT);


}

void loop()
{

digitalWrite(pump1,HIGH);       // if the user pressed on the button the two pump will be turned on for 10 seconds.
digitalWrite(pump2,HIGH);


}
