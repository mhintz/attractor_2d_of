#pragma once

#include "Attractor.h"

class AttractorManager {
public:
  Attractor* attractorRef;

  ~AttractorManager();

  void init();
  void update();
  void draw();
};