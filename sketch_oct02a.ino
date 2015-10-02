#define ledpin 5
#define buttonpin 11
#define potpin A5

//long randNumber;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);  
  pinMode(buttonpin, INPUT);
  //randomSeed(analogRead(0));
}

void loop() {
  // put your main code here, to run repeatedly:
  /*
  digitalWrite(ledpin, HIGH);
  delay(200);
  digitalWrite(ledpin, LOW);
  delay(200);
  */
  /*
  randNumber = random (100);
  if (randNumber >= 50){
    digitalWrite(ledpin, HIGH);
    delay(500);
  }
  else{
    digitalWrite(ledpin, LOW);
    delay(500);
  }
  */
  int potValue = analogRead(potpin);
  Serial.println(potValue);
  if (!digitalRead(buttonpin)){
    //digitalWrite(ledpin, HIGH);
    analogWrite(ledpin, map(potValue, 0, 1023, 0, 255));
  }
  else{
    digitalWrite(ledpin, LOW);
  }
  delay(50);
}
