#pragma once

#ifndef DIAMOND_TRAP_HPP_
#define DIAMOND_TRAP_HPP_

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
public:
  DiamondTrap();
  DiamondTrap(const std::string &name);
  DiamondTrap(const DiamondTrap &other);

  ~DiamondTrap();

  DiamondTrap &operator=(const DiamondTrap &rhs);

  void whoAmI();

private:
  std::string name_;

  using ClapTrap::hit_points_;
  using ClapTrap::energy_points_;
  using ClapTrap::attack_damage_;
};

#endif
