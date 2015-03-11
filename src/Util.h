#include "ofMain.h"

class Util {
public:
  static ofColor colorScale0;
  static ofColor colorScale1;
  static int count;
  static ofColor getColorFromDist(float distance, float maxDistance) {
    if (count++ % 100000 == 0) std::cout << distance << ", " << maxDistance << std::endl;
    return colorScale0.getLerped(colorScale1, distance / maxDistance);
  }
};

int Util::count = 0;
ofColor Util::colorScale0 = ofColor::fromHsb(0, 100, 100);
ofColor Util::colorScale1 = ofColor::fromHsb(270, 100, 100);
