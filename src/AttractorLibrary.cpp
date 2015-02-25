#include "AttractorLibrary.h"

PeterDeJongAttractor::PeterDeJongAttractor() {
  name = "Peter De Jong";
  magFactor = 200.f;
  float[2][2] rangesAandBandCandD = {{-5, 5}, {-5, 5}};
  nVec = new NoiseVector(rangesAandBandCandD, 0.005);
}

PeterDeJongAttractor::~PeterDeJongAttractor() {
  delete nVec;
}