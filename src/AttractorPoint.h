#pragma once

#include "ofMain.h"

class AttractorPoint {
  ofVec3f pos;
  ofColor color;
  float dist = 0;
  
  AttractorPoint(ofVec3f p, ofColor c) : pos(p), color(c) {}
};