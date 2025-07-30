#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
	public:

		Zombie();

		void			announce(void);
		void			setName(std::string name);
	
		static Zombie*	zombieHorde(int N, std::string name);
	
		~Zombie();
	
		private:

			std::string	_name;


};

#endif /* ZOMBIE_HPP */