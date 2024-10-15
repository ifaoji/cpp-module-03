#pragma once

#ifndef SCAV_TRAP_HPP_
#define SCAV_TRAP_HPP_

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
  ScavTrap();
  ScavTrap(const std::string &name);
  ScavTrap(const ScavTrap &other);

  ~ScavTrap();

  ScavTrap &operator=(const ScavTrap &rhs);

  void attack(const std::string &target);
  void guardGate();
};

#endif
