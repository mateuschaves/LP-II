
int interval;
int startMillis;

void setup(){
  pinMode(12, OUTPUT);
  interval = 200;
  startMillis = millis();
}

void loop(){
  if(millis() - startMillis > interval){
	digitalWrite(12, !digitalRead(12));
  	startMillis = millis();	
  }
  
}