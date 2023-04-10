#include <NewPing.h>

#define TRIGGER_PIN  12
#define ECHO_PIN     13
#define MAX_DISTANCE 400

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

int oldDistance = 0;
int newDistance = 0;
int lastBuzz = 250;

void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop() {
  delay(40);
  unsigned int distance = sonar.ping_cm();
  if(distance == 0){
    distance = 400;
  }

  
  //Serial.print(lastBuzz);
  //Serial.print("  ");
  Serial.println(lastBuzz - distance);
  if((lastBuzz - distance) >= (distance / 10) && (lastBuzz-distance) < 3000 ){
    digitalWrite(9, HIGH);
    delay(50);
    digitalWrite(9, LOW);
    lastBuzz = distance;
  }

  if(distance > lastBuzz){
    lastBuzz = distance;
  }

  //Serial.print("Distance: ");
  //Serial.println(distance);
  //Serial.println(" cm");
}
