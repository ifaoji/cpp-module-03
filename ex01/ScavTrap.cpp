#include <iostream>

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
  std::cout << "ScavTrap default constructor called" << std::endl;

  name_ = "Anonymous ScavTrap";
  hit_points_ = 100;
  energy_points_ = 50;
  attack_damage_ = 20;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
  std::cout << "ScavTrap constructor with name called" << std::endl;

  hit_points_ = 100;
  energy_points_ = 50;
  attack_damage_ = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
  std::cout << "ScavTrap copy constructor called" << std::endl;

  (void)other;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
  std::cout << "ScavTrap copy assignment operator called" << std::endl;

  if (this == &rhs)
    return *this;

  ClapTrap::operator=(rhs);

  return *this;
}

void ScavTrap::attack(const std::string &target) {
  if (hit_points_ == 0) {
    std::cout << "ScavTrap " << name_ << " tried to attack " << target
              << ", but it is dead!" << std::endl;
    return;
    ;
  }

  if (energy_points_ == 0) {
    std::cout << "ScavTrap " << name_ << " tried to attack " << target
              << ", but it does not have any energy points left!" << std::endl;
    return;
  }

  std::cout << "ScavTrap " << name_ << " attacks " << target << ", causing "
            << attack_damage_ << " points of damage!" << std::endl;

  energy_points_ = energy_points_ - 1;
}

void ScavTrap::guardGate() {
  std::cout << "ScavTrap " << name_ << " is now in Gate keeper mode"
            << std::endl;
}
