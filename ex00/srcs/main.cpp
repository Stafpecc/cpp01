#include "Zombie.hpp"

int main() {
    Zombie *zombie = Zombie::newZombie("Foo");

    if (!zombie)
        return 1;

    zombie->announce();
    delete zombie;
    Zombie::randomChump("Bar");

    return 0;
}
