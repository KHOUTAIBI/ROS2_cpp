#include <Arduino.h>
#include "Vector.h"

// put function declarations here:
int myFunction(int, int);
bool recieveStructure(byte *structurePointer, int structureLength);
bool found;
float ranges[685];
Vector<float> vector(ranges); 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  recieveStructure((byte*)&vector, sizeof(vector));
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  found = recieveStructure((byte*)&vector, sizeof(vector));
  if (found){
    for (const auto &range : ranges){
      Serial.println(range);
      if (range > 10){
        digitalWrite(LED_BUILTIN, HIGH);
      }
    }
  digitalWrite(LED_BUILTIN, LOW);
  }
}

bool recieveStructure(byte *vector_ranges, int vectorLength)
{   
    if(Serial.available() < sizeof(vector_ranges)) return;
    Serial.readBytes(vector_ranges, vectorLength);
    return true;
}