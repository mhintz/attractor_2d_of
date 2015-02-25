#include "AttractorManager.h"
#include "AttractorLibrary.h"

void AttractorManager::init() {
  attractorRef = new PeterDeJongAttractor();
}

AttractorManager::~AttractorManager() {
  delete attractorRef;
}

void AttractorManager::update() {
  attractorRef->update();
  attractorRef->genPts();
}

void AttractorManager::draw() {
  attractorRef->draw();
}