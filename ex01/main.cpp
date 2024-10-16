#include <iostream>

#include "ScavTrap.hpp"

void PrintHeader(const std::string &header) {

  std::cout << "----" << std::endl
            << header << std::endl
            << "----" << std::endl;
}

int main() {
  {
    PrintHeader("Constructor Chaining");

    ScavTrap hubert("Hubert");
  }

  {
    PrintHeader("Constructor Chaining");

    ScavTrap hubert;
  }

  {
    PrintHeader("Canonical Stuff");

    ScavTrap hubert("Hubert");
    ScavTrap hubert2(hubert);
    ScavTrap bernhart;

    hubert = bernhart;
  }

  {
    PrintHeader("Virtual Destructor");

    ClapTrap *bernhart;
    ScavTrap *hubert = new ScavTrap("Hubert");

    bernhart = hubert;

    delete bernhart;
  }

  {
    PrintHeader("Gate Keeper");

    ScavTrap hubert("Hubert");

    hubert.guardGate();
  }

  {
    PrintHeader("Attack");

    ScavTrap hubert("Hubert");

    hubert.attack("Herbert");
  }

  PrintHeader(
      "The following functions are inherited, therefore tests for existance "
      "are needed");

  {
    PrintHeader("Take Damage");

    ScavTrap hubert("Hubert");

    hubert.takeDamage(4);
  }

  {
    PrintHeader("Repairing");

    ScavTrap hubert("Hubert");

    hubert.beRepaired(4);
  }
}
