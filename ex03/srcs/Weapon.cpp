#include "Weapon.hpp"

#include <iostream>

Weapon::Weapon() {}

Weapon::Weapon(std::string type) { setType(type); }

const std::string&	Weapon::getType() const { return (_type); }

void				Weapon::setType(std::string type) { _type = type; }

Weapon::~Weapon() {}