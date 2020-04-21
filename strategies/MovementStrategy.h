#pragma once

namespace strategies {
      class MovementStrategy {
            public:
                  virtual void set_speed(double speed) = 0; 
            
                  int speed;
      };
}