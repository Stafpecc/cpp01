#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <string>

class HumanA
{
	public:

		HumanA(std::string name, std::string weapon_type);

		void	attack(std::string name, std::string weapon_type);

		~HumanA();
	
	private:

		std::string	_name;
		std::string _weapon_type;
};

#endif /* HUMAN_A_HPP */