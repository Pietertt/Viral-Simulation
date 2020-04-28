// Corona Simulation - basic simulation of a human transmissable virus
// Copyright (C) 2020  wbrinksma

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include "subject.h"
#include "strategies/MovementStrategy.h"
#include <math.h>

namespace corsim
{

Subject::Subject(int x, int y, int radius, bool infected)
{
      this->_x = x;
      this->_y = y;
      this->_radius = radius;
      this->_infected = infected;
}

double Subject::x()
{
      return this->_x;
}

double Subject::y()
{
      return this->_y;
}

void Subject::set_x(double x)
{
      this->_x = x;
}

void Subject::set_y(double y)
{
      this->_y = y;
}

double Subject::dx()
{
      return this->_dx;
}

double Subject::dy()
{
      return this->_dy;
}

void Subject::set_dx(double dx)
{
      this->_dx = dx;
}

void Subject::set_dy(double dy)
{
      this->_dy = dy;
}

/* 
      The *strategy field of the subject holds an adress. This method assigns the adress of a strategy to this field.
      This is neccesary because the MovementStrategy class is an interface, so it can't be declared.
*/
void Subject::set_strategy(strategies::MovementStrategy *strategy){
      this->strategy = strategy;
}

// Returns the current speed as an integer
int Subject::get_speed(){
      return this->strategy->get_speed();
}

int Subject::radius()
{
      return this->_radius;
}

// Returns whether the subject is infected. 
// Returns true when the infected attribute is larger than 0
bool Subject::infected()
{
      if(this->_infected > 0){
            return true;
      } else {
            return false;
      }
}

// Returns whether the subject is infected. 
// Returns true when the immunity attribute is larger than 0
bool Subject::immuun(){
      if(this->_immunity > 0){
            return true;
      } else {
            return false;
      }
}

// Infects the subject when the subject is not immuun
void Subject::infect(unsigned long tick_stamp)
{
      if(this->_immunity == 0){
            this->_infected = tick_stamp;
      }
}

// Desinfects the subject by setting the infected attribute to 0
// Also grants the subject immunity by setting the immunity attribute to the current tick
void Subject::desinfect(unsigned long tick_stamp){
      this->_infected = 0;
      this->_immunity = tick_stamp;
}

// Removes immunity from the subject by setting the immunity attribute to 0
void Subject::desimmuun(){
      this->_immunity = 0;
}

// Returns the infected attribute as an unsigned long 
unsigned long Subject::get_infected_tickstamp(){
      return this->_infected;
}

// Returns the immunity attribute as an unsigned long 
unsigned long Subject::get_immunity_timestamp(){
      return this->_immunity;
}

double Subject::angle()
{
      return atan2(_dy, _dx);
}

double Subject::speed()
{
      return sqrt(_dx * _dx + _dy * _dy);
}

} // namespace corsim