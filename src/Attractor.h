#pragma once

#include "ofMain.h"
#include "AttractorPoint.h"

class Attractor {
private:
  int maxIter = 40000;

  AttractorPoint* points;

  float pointRadius = 1;

protected:

  std::string name;
  float magFactor = 1.f;

public:

  Attractor();
  virtual ~Attractor() {};

  // abstract base class
  virtual ofVec3f getNext(const ofVec3f &) = 0;
  virtual void update() = 0;
  
  void teardown();
  void genPts();
  void draw();
  void drawPt(AttractorPoint);
  std::string getParamsDisplay();
  void drawParams();
  void updateParam(int, float);
};