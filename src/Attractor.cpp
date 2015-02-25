#include "Attractor.h"
#include "Util.h"

#include <cmath>

Attractor::Attractor() {
  points = new AttractorPoint[maxIter];
}

Attractor::~Attractor() {
  delete[] points;
}

void Attractor::reset() {
  lastPoint = ofVec3f(0, 0, 0);
}

void Attractor::genPts() {
  reset();

  float maxDist = 0.1;
  AttractorPoint * extPt;
  for (int i = 0; i < maxIter; ++i) {
    extPt = & points[i];
    ofVec3f newPos = getNext(extPt->pos);
    float dist = newPos.distance(extPt->pos);
    maxDist = fmax(maxDist, dist);
    extPt->dist = dist;
    extPt->pos.set(newPos);
  }
  for (int i = 0; i < maxIter; ++i) {
    points[i].color = getColorFromDist(points[i].dist, maxDist);
  }
}

// should be overridden
ofVec3f getNext(const ofVec3f & curPt) {}
void Attractor::update() {}

void Attractor::draw() {

}

void Attractor::drawPt(AttractorPoint pt) {

}

