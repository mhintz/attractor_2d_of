#pragma once

#include "Attractor.h"

class AttractorManager {
public:
  Attractor attractorRef;

  void update();
  void draw();
};