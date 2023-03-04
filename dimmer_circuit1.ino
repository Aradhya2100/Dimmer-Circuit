int potPin= A0; 
int LEDPin= 9;
int readValue;
int writeValue;

void setup()
{
  pinMode(potPin, INPUT);
  pinMode(LEDPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  readValue = analogRead(potPin);
  writeValue = (255./1023.) * readValue;
  analogWrite(LEDPin, writeValue);
  
  Serial.print("you are writing a value of ");
  Serial.println(writeValue);
}