
const int LEDPin = 13;
const int LDRPin = A0;
const int threshold = 100;
 
void setup() {
   pinMode(LEDPin, OUTPUT);
   pinMode(LDRPin, INPUT);
}
 
void loop() {
   int input = analogRead(LDRPin);
   if (input > threshold) {
      digitalWrite(LEDPin, LOW);
   }
   else {
      digitalWrite(LEDPin, HIGH);
   }
}

