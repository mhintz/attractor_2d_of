#pragma once

#include "ofMain.h"

#include "Attractor.h"
#include "NoiseVector.h"

class PeterDeJongAttractor : public Attractor {
public:
  PeterDeJongAttractor();
  ~PeterDeJongAttractor();
  ofVec3f getNext(ofVec3f const &);
  void reset();
  void update();
  void const translateAndScale();

private:
  float pA = 1.4;
  float pB = -2.3;
  float pC = 2.4;
  float pD = -2.1;
  NoiseVector noiseA;
  NoiseVector noiseB;
  NoiseVector noiseC;
  NoiseVector noiseD;
  float magFactor = 50.f;
};