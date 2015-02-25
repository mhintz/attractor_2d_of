#pragma once

#include "ofMain.h"
#include "AttractorPoint.h"

class Attractor {
private:

  ofVec3f lastPoint = ofVec3f(0, 0, 0);

  int maxIter = 6000;

  AttractorPoint* points;

  float pointRadius = 1;

protected:

  std::string name;
  float magFactor = 1.f;

public:

  Attractor();
  ~Attractor();

  void reset();
  void genPts();
  
  ofVec3f getNext(const ofVec3f &);
  
  void update();
  void draw();
  void drawPt(AttractorPoint);
  std::string getParamsDisplay();
  void drawParams();
  void updateParam(int, float);
};