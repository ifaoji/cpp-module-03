#pragma once

#ifndef CLAP_TRAP_HPP_
#define CLAP_TRAP_HPP_

#include <string>

class ClapTrap {
public:
  ClapTrap();
  ClapTrap(const std::string &name);
  ClapTrap(const ClapTrap &other);

  virtual ~ClapTrap();

  ClapTrap &operator=(const ClapTrap &rhs);

  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

protected:
  std::string name_;

  unsigned int hit_points_;
  unsigned int energy_points_;
  unsigned int attack_damage_;
};

#endif
