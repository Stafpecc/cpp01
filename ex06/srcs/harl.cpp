#include "harl.hpp"

#include <iostream>

Harl::Harl() {}
		
void	Harl::debug(void) { std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!\n" << std::endl; }
void	Harl::info(void) { std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!\n" << std::endl; }
void	Harl::warning(void) { std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n" << std::endl; }
void	Harl::error(void) { std::cout << "This is unacceptable!\nI want to speak to the manager now.\n" << std::endl; }

void Harl::complain(std::string level) {
    std::string levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

    void (Harl::*functions[])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    int i = 0;
    while (i < 4)
    {
        if (level == levels[i])
            break;
        i++;
    }

    switch (i) {
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            (this->*functions[i])();
            i++;
        case 1:
            std::cout << "[ INFO ]" << std::endl;
            (this->*functions[i])();
            i++;
        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            (this->*functions[i])();
            i++;
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            (this->*functions[i])();
            i++;
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}

Harl::~Harl() {}