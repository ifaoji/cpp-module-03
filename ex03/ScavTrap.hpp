#pragma once

#ifndef SCAV_TRAP_HPP_
#define SCAV_TRAP_HPP_

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
public:
  ScavTrap();
  ScavTrap(const std::string &name);
  ScavTrap(const ScavTrap &other);

  ~ScavTrap();

  ScavTrap &operator=(const ScavTrap &rhs);

  void attack(const std::string &target);
  void guardGate();

protected:
  unsigned int energy_points_;
};

#endif
