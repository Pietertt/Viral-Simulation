#pragma once

namespace strategies {
      // The class  MovementStrategy provides an interface to other classes. 
      // This is an abstract class, so its methods must be declared in the derived class 
      class MovementStrategy {
            public:
                  virtual void set_speed(double speed) = 0; 
                  virtual int get_speed() = 0;
            protected:
                  int speed;
      };
}