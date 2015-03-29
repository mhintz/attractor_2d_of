#pragma once

#include "ofMain.h"
#include "AttractorPoint.h"

class Attractor {
private:
  AttractorPoint* points;
  int maxIter = 100000;

protected:
  std::string name;
  float magFactor = 1.0f;
  ofVec3f lastPos;

public:

  Attractor();
  virtual ~Attractor();

  // abstract base class
  virtual ofVec3f getNext(const ofVec3f &) = 0;
  virtual void reset() = 0;
  virtual void update() = 0;
  virtual void translateAndScale() const = 0;
  
  void genPts();
  void draw() const;
};