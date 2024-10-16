#include <iostream>

#include "FragTrap.hpp"

void PrintHeader(const std::string &header) {

  std::cout << "----" << std::endl
            << header << std::endl
            << "----" << std::endl;
}

int main() {
  {
    PrintHeader("Constructor Chaining");

    FragTrap hubert("Hubert");
  }

  {
    PrintHeader("Constructor Chaining");

    FragTrap hubert;
  }

  {
    PrintHeader("Canonical Stuff");

    FragTrap hubert("Hubert");
    FragTrap hubert2(hubert);
    FragTrap bernhart;

    hubert = bernhart;
  }

  {
    PrintHeader("Virtual Destructor");

    ClapTrap *bernhart;
    FragTrap *hubert = new FragTrap("Hubert");

    bernhart = hubert;

    delete bernhart;
  }

  {
    PrintHeader("High Five");

    FragTrap hubert("Hubert");

    hubert.highFivesGuys();
  }

  PrintHeader(
      "The following functions are inherited, therefore tests for existance "
      "are needed");

  {
    PrintHeader("Attack");

    FragTrap hubert("Hubert");

    hubert.attack("Herbert");
  }

  {
    PrintHeader("Take Damage");

    FragTrap hubert("Hubert");

    hubert.takeDamage(4);
  }

  {
    PrintHeader("Repairing");

    FragTrap hubert("Hubert");

    hubert.beRepaired(4);
  }
}
