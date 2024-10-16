#include <iostream>

#include "FragTrap.hpp"

FragTrap::FragTrap() {
  std::cout << "FragTrap default constructor called" << std::endl;

  name_ = "Anonymous FragTrap";
  hit_points_ = 100;
  energy_points_ = 100;
  attack_damage_ = 30;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
  std::cout << "FragTrap constructor with name called" << std::endl;

  hit_points_ = 100;
  energy_points_ = 100;
  attack_damage_ = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
  std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
  std::cout << "FragTrap copy assignment operator called" << std::endl;

  if (this == &rhs)
    return *this;

  ClapTrap::operator=(rhs);

  return *this;
}

void FragTrap::highFivesGuys(void) {
  std::cout << "FragTrap " << name_ << " asks to high five someone"
            << std::endl;
}
