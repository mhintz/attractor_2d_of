#include "ofMain.h"

static ofColor colorScale0 = ofColor::fromHsb(0, 100, 100);
static ofColor colorScale1 = ofColor::fromHsb(270, 100, 100);

class Util {
public:
  static ofColor getColorFromDist(float distance, float maxDistance) {
    return ofColor::fromHsb(ofLerp(0.0f, 270.0f, distance / maxDistance), 100, 100);
  }
};