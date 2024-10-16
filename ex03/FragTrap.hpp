#pragma once

#ifndef FRAG_TRAP_HPP_
#define FRAG_TRAP_HPP_

#include <string>

#include "ClapTrap.hpp"

struct FragTrap : public virtual ClapTrap {
public:
  FragTrap();
  FragTrap(const std::string &name);
  FragTrap(const FragTrap &other);

  ~FragTrap();

  FragTrap &operator=(const FragTrap &rhs);

  void highFivesGuys(void);

protected:
  unsigned int hit_points_;
  unsigned int attack_damage_;
};

#endif
