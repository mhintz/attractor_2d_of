#include "ofMain.h"

static ofColor colorScale0 = ofColor::fromHsb(0, 100, 100);
static ofColor colorScale1 = ofColor::fromHsb(270, 100, 100);

class Util {
public:
  static const ofColor getColorFromDist(float distance, float maxDistance) {
    float lerpAmount = distance / maxDistance;
    return ofColor::fromHsb(ofLerp(0, 270, lerpAmount), 100, 100);
  }
};