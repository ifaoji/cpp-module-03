#include <iostream>
#include <limits>

#include "ClapTrap.hpp"

void PrintHeader(const std::string &header) {

  std::cout << "----" << std::endl
            << header << std::endl
            << "----" << std::endl;
}

int main() {
  {
    PrintHeader("Canonical Stuff");

    ClapTrap hubert("Hubert");
    ClapTrap hubert2(hubert);
    ClapTrap bernhart;

    hubert = bernhart;
  }

  // {
  //   PrintHeader("Default Values");

  //   ClapTrap hubert("Hubert");
  //   std::cout << "Name: " << hubert.name_ << " should be: " << "hubert"
  //             << std::endl;
  //   std::cout << "Hit points: " << hubert.hit_points_ << " should be: " <<
  //   "10"
  //             << std::endl;
  //   std::cout << "Energy points: " << hubert.hit_points_
  //             << " should be: " << "10" << std::endl;
  //   std::cout << "Attack damage: " << hubert.hit_points_
  //             << " should be: " << "0" << std::endl;
  // }

  {
    PrintHeader("Attacking");

    ClapTrap hubert("Hubert");
    hubert.attack("Herbert");
    hubert.attack("Herbert");
    hubert.attack("Herbert");
    hubert.attack("Herbert");
    hubert.attack("Herbert");
    hubert.attack("Herbert");
    hubert.attack("Herbert");
    hubert.attack("Herbert");
    hubert.attack("Herbert");
    hubert.attack("Herbert");

    std::cout << "attack should fail" << std::endl;
    hubert.attack("Herbert");
  }

  {
    PrintHeader("Take Damage");

    ClapTrap hubert("Hubert");
    hubert.takeDamage(1);
    hubert.takeDamage(1);
    hubert.takeDamage(1);
    hubert.takeDamage(1);
    hubert.takeDamage(1);
    hubert.takeDamage(1);
    hubert.takeDamage(1);
    hubert.takeDamage(1);
    hubert.takeDamage(1);
    hubert.takeDamage(1);

    std::cout << "Should be dead" << std::endl;
    hubert.attack("Herbert");
  }

  {
    PrintHeader("Take Too Much Damage");

    ClapTrap hubert("Hubert");
    hubert.takeDamage(100);

    std::cout << "Should be dead" << std::endl;
    hubert.attack("Herbert");
  }

  {
    PrintHeader("Repairing");

    ClapTrap hubert("Hubert");
    hubert.beRepaired(1);
    hubert.beRepaired(1);
    hubert.beRepaired(1);
    hubert.beRepaired(1);
    hubert.beRepaired(1);
    hubert.beRepaired(1);
    hubert.beRepaired(1);
    hubert.beRepaired(1);
    hubert.beRepaired(1);
    hubert.beRepaired(1);

    std::cout << "Has no energy left" << std::endl;
    hubert.beRepaired(1);
  }

  {
    PrintHeader("Repairing with overflow");

    ClapTrap hubert("Hubert");
    hubert.beRepaired(std::numeric_limits<unsigned int>::max());

    std::cout << "Is unstoppable" << std::endl;
    // std::cout << hubert.hit_points_ << std::endl;
  }

  {
    PrintHeader("Dead Repair");

    ClapTrap hubert("Hubert");
    hubert.takeDamage(10);

    std::cout << "Is dead" << std::endl;
    hubert.beRepaired(10);
  }
}
