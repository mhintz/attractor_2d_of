#include "NoiseVector.h"

#include "ofMain.h"

NoiseVector::NoiseVector(float pMin, float pMax, float pInc) : min(pMin), max(pMax), inc(pInc) {
  range = max - min;
  index = ofRandom(20.f);
}

float NoiseVector::getNext() {
  index += inc;
  return min + ofNoise(index) * range;
}