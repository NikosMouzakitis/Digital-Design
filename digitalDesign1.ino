//----------------------------------------written by Nikos Mouzakitis.-----------------------------------------------------
//--------------------------GitHub: https://github.com/NikosMouzakitis-----------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------
//CIRCUIT/SCHEMMATIC: https://123d.circuits.io/circuits/1808608-implementation-digital-gates-boolean-algebra-digital-design
//-------------------------------------------------------------------------------------------------------------------------
// ----------------------------------This circuit implements the boolean algebra,------------------------------------------ 
//-----------------------------------in the function G =[ (x*y) + (x+y) ] for x,y boolean values,using an Arduino board.---
//----------------------------------------------digitalDesign1.ino-----------------------------------March 2016------------

void setup()
{
  	Serial.begin(9600);
  	Serial.println("operating.");
}
void loop()
{
  	int j,i,d_time = 2000;
  	int v1,v2 ;
  	v1 = 0;
  	v2 = 1;

        digitalWrite(7,v1);
  	digitalWrite(6,v2);
  	i = digitalRead(5);
  	Serial.print("x=");
        Serial.print(v1);
  	Serial.print(" y=");
  	Serial.println(v2);
  	Serial.print("Function Output:");
  	Serial.print(i);
        Serial.println();
  	Serial.println();
  	delay(d_time);
  
        digitalWrite(7,v2);
  	digitalWrite(6,v2);
  	i = digitalRead(5);
  	Serial.print("x=");	
  	Serial.print(v2);
  	Serial.print(" y=");
  	Serial.println(v2);
  	Serial.print("Function Output:");
  	Serial.print(i);
    	Serial.println();
        Serial.println();               
  	delay(d_time);
  
  
  	digitalWrite(7,v1);
  	digitalWrite(6,v1);
  	i = digitalRead(5);
  	Serial.print("x=");
  	Serial.print(v1);
  	Serial.print(" y=");
  	Serial.println(v1);
  	Serial.print("Function Output:");
  	Serial.print(i);
        Serial.println();
  	Serial.println();
  	delay(d_time);
}

