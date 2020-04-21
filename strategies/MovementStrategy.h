#pragma once

namespace strategies {
      class MovementStrategy {
            public:
                  virtual void set_speed(double speed) = 0; 
                  virtual int get_speed() = 0;
            protected:
                  int speed;
      };
}