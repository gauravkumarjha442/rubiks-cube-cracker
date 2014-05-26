#ifndef _BUSYBIN_GOAL1_H_
#define _BUSYBIN_GOAL1_H_

#include "Goal.h"
#include "../RubiksCube.h"

namespace busybin
{
  /**
   * Goal 1 - solve any edge.
   */
  class Goal1 : public Goal
  {
  public:
    Goal1();
    bool isSatisfied(const RubiksCube& cube);
  };
}

#endif

