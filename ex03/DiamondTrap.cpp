#include <iostream>
#include <string>

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
    : ClapTrap("Anonymous DiamondTrap_clap_name"), FragTrap(), ScavTrap(),
      name_("Anonymous DiamondTrap") {
  std::cout << "DiamondTrap default constructor called" << std::endl;

  hit_points_ = FragTrap::hit_points_;
  energy_points_ = ScavTrap::energy_points_;
  attack_damage_ = FragTrap::attack_damage_;
}

DiamondTrap::DiamondTrap(const std::string &name)
    : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name),
      name_(name) {
  std::cout << "DiamondTrap constructor with name called" << std::endl;

  hit_points_ = FragTrap::hit_points_;
  energy_points_ = ScavTrap::energy_points_;
  attack_damage_ = FragTrap::attack_damage_;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
    : ClapTrap(other), FragTrap(other), ScavTrap(other), name_(other.name_) {
  std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
  std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs) {
  std::cout << "DiamondTrap copy assignment operator called" << std::endl;

  if (this == &rhs)
    return *this;

  ClapTrap::operator=(rhs);
  FragTrap::operator=(rhs);
  ScavTrap::operator=(rhs);

  name_ = rhs.name_;

  return *this;
}

void DiamondTrap::whoAmI() {
  // std::cout << "MY HIT POINTS ARE " << hit_points_ << std::endl;
  // std::cout << "MY ENERGY POINTS ARE " << energy_points_ << std::endl;
  // std::cout << "MY ATTACK_DAMAGE ARE " << attack_damage_ << std::endl;

  std::cout << "DiamondTrap " << name_ << " is also known as "
            << ClapTrap::name_ << std::endl;
}
