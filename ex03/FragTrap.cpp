#include <iostream>

#include "FragTrap.hpp"

FragTrap::FragTrap()
    : ClapTrap("Anonymous FragTrap"), hit_points_(100), attack_damage_(30) {
  std::cout << "FragTrap default constructor called" << std::endl;

  energy_points_ = 100;
}

FragTrap::FragTrap(const std::string &name)
    : ClapTrap(name), hit_points_(100), attack_damage_(30) {
  std::cout << "FragTrap constructor with name called" << std::endl;

  energy_points_ = 100;
}

FragTrap::FragTrap(const FragTrap &other)
    : ClapTrap(other), hit_points_(100), attack_damage_(30) {
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

  hit_points_ = rhs.hit_points_;
  attack_damage_ = rhs.attack_damage_;

  return *this;
}

void FragTrap::highFivesGuys(void) {
  std::cout << "FragTrap " << name_ << " asks to high five someone"
            << std::endl;
}
