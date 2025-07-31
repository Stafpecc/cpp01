#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
	public:

		Zombie(std::string name);

		void	announce(void);
		
		static Zombie*	newZombie(std::string name);
		static void	randomChump(std::string name);
		
		~Zombie();
	
	private:

		std::string	_name;


};

#endif /* ZOMBIE_HPP */