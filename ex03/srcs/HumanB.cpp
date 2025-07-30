#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) {
	_name = name;
}

void	HumanB::attack(std::string name, std::string weapon_type) {
	std::cout << name << " attacks with their " << weapon_type << std::endl;
}

HumanB::~HumanB() {}