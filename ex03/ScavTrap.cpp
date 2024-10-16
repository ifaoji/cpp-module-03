#include <iostream>

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Anonymous ScavTrap"), energy_points_(50) {
  std::cout << "ScavTrap default constructor called" << std::endl;

  hit_points_ = 100;
  attack_damage_ = 20;
}

ScavTrap::ScavTrap(const std::string &name)
    : ClapTrap(name), energy_points_(50) {
  std::cout << "ScavTrap constructor with name called" << std::endl;

  hit_points_ = 100;
  attack_damage_ = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
    : ClapTrap(other), energy_points_(other.energy_points_) {
  std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
  std::cout << "ScavTrap copy assignment operator called" << std::endl;

  if (this == &rhs)
    return *this;

  ClapTrap::operator=(rhs);

  energy_points_ = rhs.energy_points_;

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

  energy_points_ -= 1;
}

void ScavTrap::guardGate() {
  std::cout << "ScavTrap " << name_ << " is now in Gate keeper mode"
            << std::endl;
}
