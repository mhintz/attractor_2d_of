#pragma once

#include "ofMain.h"
#include "AttractorPoint.h"

class Attractor {
  std::string name;
  ofVec3f lastPoint;
  float magFactor = 1.f;
  
  int maxIter = 6000;
  
  float centerX = ofGetWindowWidth() / 2.f;
  float centerY = ofGetWindowHeight() / 2.f;
  float adjX = 0.f;
  float adjY = 0.f;
  
  std::vector<AttractorPoint> points;
  
  float pointRadius = 1;
  
  Attractor();
  void reset();
  void genPts();
  
  ofVec3f getNext();
  ofVec3f nextPt();
  void setMinMax(ofVec3f, ofVec3f, ofVec3f);
  
  void update();
  void draw();
  void drawPt(AttractorPoint);
  std::string getParamsDisplay();
  void drawParams();
  void updateParam(int, float);
};