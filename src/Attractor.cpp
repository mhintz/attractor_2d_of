#include <cmath>
#include <iostream>

#include "Attractor.h"
#include "Util.h"

Attractor::Attractor() {
  lastPos = ofVec3f(0.0f, 0.0f, 0.0f);
  points = new AttractorPoint[maxIter];
}

Attractor::~Attractor() {
  delete[] points;
}

void Attractor::genPts() {
  reset();

  AttractorPoint extPt;
  ofVec3f lastPosition = lastPos;
  float maxDist = 0.1;
  for (int i = 0; i < maxIter; ++i) {
    ofVec3f newPos = getNext(lastPosition);
    float dist = newPos.distance(lastPosition);
    maxDist = fmaxf(maxDist, dist);
    lastPosition = newPos;

    points[i].dist = dist;
    points[i].pos = newPos;
  }
  for (int i = 0; i < maxIter; ++i) {
    points[i].color = Util::getColorFromDist(points[i].dist, maxDist);
  }
}

void Attractor::draw() const {
  ofPushMatrix();

  applyTransform();

  ofMesh attractorMesh;
  for (int i = 0; i < maxIter; ++i) {
    attractorMesh.addVertex(points[i].pos);
    attractorMesh.addColor(points[i].color);
  }
  attractorMesh.setMode(OF_PRIMITIVE_POINTS);
  attractorMesh.draw();

  ofPopMatrix();
}

