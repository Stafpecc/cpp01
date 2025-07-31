#include <iostream>

#include "replace.hpp"

int main(int argc, char* argv[])
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    Replace rep(argv[1], argv[2], argv[3]);
    if (!rep.process())
    {
        std::cerr << "Replace operation failed." << std::endl;
        return 1;
    }

    std::cout << "Replacement done successfully." << std::endl;
    return 0;
}
