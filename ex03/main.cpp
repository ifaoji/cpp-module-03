#include <iostream>

#include "DiamondTrap.hpp"

void PrintHeader(const std::string &header) {

  std::cout << "----" << std::endl
            << header << std::endl
            << "----" << std::endl;
}

int main() {
  {
    PrintHeader("Constructor Chaining");

    DiamondTrap hubert("Hubert");
  }

  {
    PrintHeader("Default Constructor Chaining");

    DiamondTrap hubert;
  }

  {
    PrintHeader("Canonical Stuff");

    DiamondTrap hubert("Hubert");
    DiamondTrap hubert2(hubert);
    DiamondTrap bernhart;

    hubert = bernhart;
  }

  {
    PrintHeader("Virtual Destructor");

    ClapTrap *bernhart;
    DiamondTrap *hubert = new DiamondTrap("Hubert");

    bernhart = hubert;

    delete bernhart;
  }

  {
    PrintHeader("Constructor Chaining");

    DiamondTrap hubert("Hubert");
  }

  {
    PrintHeader("DiamondTrap whoAmI");

    DiamondTrap hubert("Hubert");

    hubert.whoAmI();
  }

  {
    PrintHeader("ScavTrap Attack");

    DiamondTrap hubert("Hubert");

    hubert.attack("Herbert");
  }

  {
    PrintHeader("FragTrap High Five");

    DiamondTrap hubert("Hubert");

    hubert.highFivesGuys();
  }
}
