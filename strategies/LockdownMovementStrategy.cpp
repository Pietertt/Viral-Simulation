#include "LockdownMovementStrategy.h"

namespace strategies {
      LockdownMovementStrategy::LockdownMovementStrategy(){
            this->set_speed(0);
      }

      void LockdownMovementStrategy::set_speed(double speed) {
            this->speed = speed;
      }
}