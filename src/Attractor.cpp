#include <cmath>
#include <iostream>

#include "Attractor.h"
#include "Util.h"

Attractor::Attractor() {
  points = new AttractorPoint[maxIter];
}

void Attractor::teardown() {
  delete[] points;
}

void Attractor::genPts() {
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
    points[i].color = Util::getColorFromDist(points[i].dist, maxDist);
  }
}

void Attractor::draw() {
  ofPushMatrix();
  
  ofTranslate(ofGetWindowWidth() / 2, ofGetWindowHeight() / 2);
  ofScale(20, 20);

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

void Attractor::drawPt(AttractorPoint pt) {

}

