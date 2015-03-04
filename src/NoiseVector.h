#pragma once

class NoiseVector {
  float inc;
  float min;
  float max;
  float range;
  float index;

public:
  NoiseVector(float, float, float);
  float getNext();
};