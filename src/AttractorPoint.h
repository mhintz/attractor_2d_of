#pragma once

#include "ofMain.h"

class AttractorPoint {
public:
  ofVec3f pos;
  ofColor color = ofColor(255, 0, 0);
  float dist;
  
  AttractorPoint()
    : dist(0) {};
  AttractorPoint(ofVec3f p, ofColor c)
    : pos(p), color(c), dist(0) {}
};