#include "RegularMovementStrategy.h"

namespace strategies {
      RegularMovementStrategy::RegularMovementStrategy(){
            this->set_speed(1000 / 30);
      }

      void RegularMovementStrategy::set_speed(double speed) {
            this->speed = speed;
      }
}