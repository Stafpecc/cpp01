#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
	public:

		Weapon();

		std::string&	getType() const;
		std::string		setType(std::string);

		~Weapon();
	
	private:

		std::string	_type;
};

#endif /* WEAPON_HPP */