class LED {
	int LredC;
	int LyelC;
	int LgreC;
	int LredP;
	int LgreP;
	int buzer; 
public:
  LED (int LrC, int LyC, int LgrC, int LrP, int LgrP, int b) {
  	LredC = LrC;
	LyelC = LyC;
	LgreC = LgrC;
	LredP = LrP;
	LgreP = LgrP;
	buzer = b; 
    
  pinMode(LredC, OUTPUT);
  pinMode(LyelC, OUTPUT);
  pinMode(LgreC, OUTPUT);
  pinMode(LredP, OUTPUT);
  pinMode(LgreP, OUTPUT);
  pinMode(buzer, OUTPUT);
  }
  void apita () {
  digitalWrite(LredC, HIGH);
  digitalWrite(LgreP, HIGH);
  tone(buzer,392);
  delay(1000); 
  digitalWrite(LyelC, HIGH);
  digitalWrite(LredC, LOW);
  digitalWrite(LgreP, LOW);
  noTone(buzer);
  digitalWrite(LredP, HIGH);
  delay(1000); 
  digitalWrite(LyelC,LOW);
  digitalWrite(LgreC, HIGH);
  delay(1000);
  digitalWrite(LgreC, LOW);
  digitalWrite(LredP, LOW);
  }
};

LED leds(13, 12, 11, 10, 9, 8);

void setup()
{}

void loop()
{
	leds.apita();
}
