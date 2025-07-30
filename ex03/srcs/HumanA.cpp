#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, std::string weapon_type) {
	_name = name;
	_weapon_type = weapon_type;
}

void	HumanA::attack(std::string name, std::string weapon_type) {
	std::cout << name << " attacks with their " << weapon_type << std::endl;
}

HumanA::~HumanA() {}