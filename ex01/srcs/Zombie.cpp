#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie() {}

void	Zombie::announce(void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	_name = name;
}

Zombie::~Zombie() {
	std::cout << _name << ": died again" << std::endl;
}
