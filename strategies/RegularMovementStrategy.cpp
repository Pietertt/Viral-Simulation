#include "RegularMovementStrategy.h"

namespace strategies {
      // Sets the speed when the class is instantiated
      RegularMovementStrategy::RegularMovementStrategy(){
            this->set_speed(1000 / 100);
      }

      // Sets the speed of this strategy
      void RegularMovementStrategy::set_speed(double speed) {
            this->speed = speed;
      }

      // Returns the speed of the strategy as an integer
      int RegularMovementStrategy::get_speed(){
            return this->speed;
      }
}