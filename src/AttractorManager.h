#pragma once

#include "Attractor.h"
#include "AttractorLibrary.h"

class AttractorManager {
public:
  Attractor* attractorRef;

  AttractorManager();
  ~AttractorManager();

  void update();
  void draw();
};