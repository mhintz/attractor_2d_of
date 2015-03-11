#include <cmath>
#include <iostream>

#include "Attractor.h"
#include "Util.h"

Attractor::Attractor() {
  points = new AttractorPoint[maxIter];
}

Attractor::~Attractor() {
  delete[] points;
}

void Attractor::genPts() {
  reset();

  AttractorPoint * extPt;
  const ofVec3f * lastPosition = & lastPos;
  float maxDist = 0.1;
  for (int i = 0; i < maxIter; ++i) {
    ofVec3f newPos = getNext(*lastPosition);
    float dist = newPos.distance(*lastPosition);
    lastPosition = & newPos;
    maxDist = fmaxf(maxDist, dist);

    points[i].dist = dist;
    points[i].pos.set(newPos);
  }
  for (int i = 0; i < maxIter; ++i) {
    points[i].color = Util::getColorFromDist(points[i].dist, maxDist);
  }
}

void Attractor::draw() const {
  ofPushMatrix();
  
  ofTranslate(ofGetWindowWidth() / 2, ofGetWindowHeight() / 2);
  float mag = getMagFactor();
  ofScale(mag, mag);

  ofMesh attractorMesh;
  AttractorPoint * pt;
  for (int i = 0; i < maxIter; ++i) {
    pt = & points[i];
    attractorMesh.addVertex(pt->pos);
    attractorMesh.addColor(pt->color);
  }
  attractorMesh.setMode(OF_PRIMITIVE_POINTS);
  attractorMesh.draw();

  ofPopMatrix();
}

