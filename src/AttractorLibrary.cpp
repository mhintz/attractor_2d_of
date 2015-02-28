#include "AttractorLibrary.h"

#include "math.h"

PeterDeJongAttractor::PeterDeJongAttractor()
: noiseA(NoiseVector(-5.f, 5.f, 0.005f)), noiseB(NoiseVector(-5.f, 5.f, 0.005f)), noiseC(NoiseVector(-5.f, 5.f, 0.005f)), noiseD(NoiseVector(-5.f, 5.f, 0.005f)) {
  name = "Peter De Jong";
  magFactor = 200.f;
}

void PeterDeJongAttractor::update() {
  pA = noiseA.getNext();
  pB = noiseB.getNext();
  pC = noiseC.getNext();
  pD = noiseD.getNext();
}

ofVec3f PeterDeJongAttractor::getNext(ofVec3f const& prev) {
  float x = sinf(pA * prev.y) + cosf(pB * prev.x);
  float y = sinf(pC * prev.x) + cosf(pD * prev.y);
  return ofVec3f(x, y, 0.f);
}