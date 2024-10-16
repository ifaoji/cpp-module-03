#include <iostream>
#include <limits>

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : name_("Anonymous"), hit_points_(10), energy_points_(10),
      attack_damage_(0) {
  std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
    : name_(name), hit_points_(10), energy_points_(10), attack_damage_(0) {
  std::cout << "ClapTrap constructor with name called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
    : name_(other.name_), hit_points_(other.hit_points_),
      energy_points_(other.energy_points_),
      attack_damage_(other.attack_damage_) {
  std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap deconstructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
  std::cout << "ClapTrap copy assignment operator called" << std::endl;

  if (this == &rhs)
    return *this;

  name_ = rhs.name_;
  hit_points_ = rhs.hit_points_;
  energy_points_ = rhs.energy_points_;
  attack_damage_ = rhs.attack_damage_;

  return *this;
}

void ClapTrap::attack(const std::string &target) {
  if (hit_points_ == 0) {
    std::cout << "ClapTrap " << name_ << " tried to attack " << target
              << ", but it is dead!" << std::endl;
    return;
    ;
  }

  if (energy_points_ == 0) {
    std::cout << "ClapTrap " << name_ << " tried to attack " << target
              << ", but it does not have any energy points left!" << std::endl;
    return;
  }

  std::cout << "ClapTrap " << name_ << " attacks " << target << ", causing "
            << attack_damage_ << " points of damage!" << std::endl;

  energy_points_ -= 1;
}

void ClapTrap::takeDamage(unsigned int amount) {
  std::cout << "ClapTrap " << name_ << " takes " << amount
            << " points of damage!" << std::endl;

  if (amount > hit_points_)
    amount = hit_points_;

  hit_points_ -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (hit_points_ == 0) {
    std::cout << "ClapTrap " << name_ << " tried to repair " << amount
              << " points, but it is dead!" << std::endl;

    return;
  }

  if (energy_points_ == 0) {
    std::cout << "ClapTrap " << name_ << " tried to repair " << amount
              << " points, but it has no energy left!" << std::endl;

    return;
  }

  std::cout << "ClapTrap " << name_ << " got " << amount << " points, repaired!"
            << std::endl;

  if (amount > std::numeric_limits<unsigned int>::max() - hit_points_) {
    amount = std::numeric_limits<unsigned int>::max() - hit_points_;
  }

  energy_points_ -= 1;
  hit_points_ += amount;
}
