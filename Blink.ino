void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);
}


void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  
  digitalWrite(D3, HIGH); 
  digitalWrite(D4, HIGH); 
  digitalWrite(D5, HIGH); 
  digitalWrite(D6, HIGH); 
  digitalWrite(D7, HIGH);   
  delay(100);                       
  digitalWrite(LED_BUILTIN, LOW);    
  digitalWrite(D3, LOW); 
  digitalWrite(D4, LOW); 
  digitalWrite(D5, LOW); 
  digitalWrite(D6, LOW); 
  digitalWrite(D7, LOW);    
  delay(100);                      
}
