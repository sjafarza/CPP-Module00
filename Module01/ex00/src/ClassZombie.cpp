#include "ClassZombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
}

Zombie::~Zombie()
{
    std::cout<< "Good Bye !\n";
}

void    Zombie::announceName(void) const
{
    std::cout << this->_name
    << " : "
    << "BraiiiiiinnnzzzZ...\n";
}
