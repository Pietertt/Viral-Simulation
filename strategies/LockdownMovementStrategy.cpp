#include "LockdownMovementStrategy.h"

namespace strategies {
      // Sets the speed when the class is instantiated
      LockdownMovementStrategy::LockdownMovementStrategy(){
            this->set_speed(0);
      }

      // Sets the speed of this strategy
      void LockdownMovementStrategy::set_speed(double speed) {
            this->speed = speed;
      }

      // Returns the speed of the strategy as an integer
      int LockdownMovementStrategy::get_speed(){
            return this->speed;
      }
}