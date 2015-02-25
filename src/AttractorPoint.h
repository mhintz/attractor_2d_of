#pragma once

#include "ofMain.h"

class AttractorPoint {
public:
  ofVec3f pos = ofVec3f(0, 0, 0);
  ofColor color = ofColor(0, 100, 100, 1);
  float dist = 0;
  
  AttractorPoint() {};
  AttractorPoint(ofVec3f p, ofColor c) : pos(p), color(c) {}
};