#include "MovementStrategy.h"

namespace strategies {
      class RegularMovementStrategy : public MovementStrategy {
            public:
                  RegularMovementStrategy();
                  virtual void set_speed(double speed);
                  virtual int get_speed();
      };
}