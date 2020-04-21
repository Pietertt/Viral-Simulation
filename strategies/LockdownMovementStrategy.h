#include "MovementStrategy.h"

namespace strategies {
      class LockdownMovementStrategy : public MovementStrategy {
            public:
                  LockdownMovementStrategy();
                  virtual void set_speed(double speed);  
      };
}