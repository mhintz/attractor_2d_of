#pragma once

#include "Attractor.h"
#include "NoiseVector.h"

class PeterDeJongAttractor : public Attractor {
public:

private:
  float pA = 1.4;
  float pB = -2.3;
  float pC = 2.4;
  float pD = -2.1;
  NoiseVector * nVec;

  PeterDeJongAttractor();
  ~PeterDeJongAttractor();
};