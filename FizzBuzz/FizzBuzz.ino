int t=0;
int x=0;

void setup() {
  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
  

  for(x=1; x<=100; x++){
    t=1+millis()/200;
  if(x%3==0 && x%5==0) {
    Serial.print("FizzBuzz");
  } else {
    if (x%3==0) {
      Serial.print("Buzz");
    } else {
      if (x%5==0) {
       Serial.print("Fizz");
      } else {
       Serial.print("");
      }
    }
  } 
  Serial.println("");
  Serial.print(t);
  delay(200);
  }
}
