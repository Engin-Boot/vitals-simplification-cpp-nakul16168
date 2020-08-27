#include <assert.h>

bool vitalsIsInLimit(float value, int lowerLimit, int upperLimit){
    return (value >= lowerLimit && value <= upperLimit) ;
}
bool bpmIsOk(float bpm){
    return (bpm >= 70 && bpm <= 150) ;
}
bool spo2IsOk(float spo2){
    return (spo2 > 90) ;
}
bool respRateIsOk(float respRate){
    return (respRate >= 30 && respRate <= 95);
}
bool vitalsAreOk(float bpm, float spo2, float respRate) {
  return (vitalsIsInLimit(bpm , 70 , 150) && vitalsIsInLimit(spo2 , 90 , 100) && vitalsIsInLimit(respRate , 30 , 95));
}

int main() {
  assert(vitalsIsInLimit(60, 70, 150) == false);
  assert(vitalsIsInLimit(180, 70, 150) == false);
  assert(vitalsIsInLimit(80, 70, 150) == true);
  
}
