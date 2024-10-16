#pragma once

#ifndef FRAG_TRAP_HPP_
#define FRAG_TRAP_HPP_

#include <string>

#include "ClapTrap.hpp"

struct FragTrap : public ClapTrap {
public:
  FragTrap();
  FragTrap(const std::string &name);
  FragTrap(const FragTrap &other);

  ~FragTrap();

  FragTrap &operator=(const FragTrap &rhs);

  void highFivesGuys(void);
};

#endif
