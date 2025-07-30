#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <string>

class HumanB
{
	public:

		HumanB(std::string name);

		void	attack(std::string name, std::string weapon_type);

		~HumanB();
	
	private:

		std::string	_name;
		std::string _weapon_type;
};

#endif /* HUMAN_B_HPP */