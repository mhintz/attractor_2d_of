#pragma once

#include "ofMain.h"

class AttractorPoint {
public:
  ofVec3f pos;
  ofColor color;
  float dist;
  
  AttractorPoint()
    : pos(ofVec3f(0, 0, 0)), color(ofColor(255)), dist(0) {};
  AttractorPoint(ofVec3f p, ofColor c)
    : pos(p), color(c), dist(0) {}
};