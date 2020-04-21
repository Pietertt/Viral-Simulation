#include "RegularMovementStrategy.h"

namespace strategies {
      RegularMovementStrategy::RegularMovementStrategy(){
            this->set_speed(1000 / 500);
      }

      void RegularMovementStrategy::set_speed(double speed) {
            this->speed = speed;
      }

      int RegularMovementStrategy::get_speed(){
            return this->speed;
      }
}