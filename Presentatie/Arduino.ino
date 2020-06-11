
int inByte = 0; 
void setup()
{	Serial.begin(9600);
	for (int i  = 3; i <= 8; i++)
		pinMode(i, OUTPUT);
	
}

void loop()
{
	
	
	
	if (Serial.available() > 0){ 
		inByte = Serial.read();}
	{
		if (inByte == 'a'){
			int digit = 0;
			digit=9;
			int pin=4;
			pin =pin++;
			digitalWrite(pin, (bool)(digit & (1 << pin - 4)));
			
			
		}
		
		if (inByte == 'b'){
			int digit = 0;
			digit=9;
			int pin=5;
			pin =pin++;
			digitalWrite(pin, (bool)(digit & (1 << pin - 5)));
			
			
		}
		if (inByte == 'c'){
			
			int digit = 9;
			
			int pin=6;
			pin =pin++;
			digitalWrite(pin, (bool)(digit & (1 << pin - 6)));
			
			
		}
		if (inByte == 'd'){
			
			int digit = 9;
			
			int pin=7;
			pin =pin++;
			digitalWrite(pin, (bool)(digit & (1 << pin - 7)));
			
			
		}
		
	}
	
}    