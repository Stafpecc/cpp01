#include <iostream>

int main() {
    std::string     stringORIGIN =  "HI THIS IS BRAIN";
    std::string*    stringPTR = &stringORIGIN;
    std::string&    stringREF = stringORIGIN;

    std::cout << "memory adress of origin    - -> " << &stringORIGIN << std::endl;
    std::cout << "memory adress of pointer    --> " << &stringPTR << std::endl;
    std::cout << "memory adress of reference  --> " << &stringREF << std::endl;

    std::cout << std::endl;

    std::cout << "content of origin           --> " << stringORIGIN << std::endl;
    std::cout << "content of pointer          --> " << stringPTR << std::endl;
    std::cout << "content of reference        --> " << stringREF << std::endl;

    return 0;
}