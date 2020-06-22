#define WAIT_TIME           (200)

void setup() {
  Serial.begin(115200);
  }

  void loop() {
  for(int t = 1;t < 101; t++) {
    Serial.print(t);

    if (t % 3 == 0 && t % 5 == 0) {
      Serial.println(":FizzBuzz");
    } else if(t % 3 == 0) {
      Serial.println(":Buzz");
    } else if(t % 5 == 0) {
      Serial.println(":Fizz");
    } else if(t==100) {
        break;
    } else {
      Serial.println(":");
    }
    delay(WAIT_TIME);
  }
  while(1);
}
