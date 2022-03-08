#include <iostream>
#include <fstream>
#include "../inc/ClassStream.hpp"

void    replace(char **av)
{
    std::string     fileName = av[1];
    Stream           stream(fileName);
    std::string     s1 = av[2];
    std::string     s2 = av[3];
    std::ifstream   ifs(fileName.c_str());
    if (s1.empty() || s2.empty())
    {
        std::cout << "Error: strings can not be emplty !";
        return ;
    }



}

int main(int ac, char **av)
{
    std::string     fileName = av[1];
    Stream           stream(fileName);

    if (ac != 4)
    {
        std::cout << "Error: Number of args is not correct .\n";
        return (1);
    }
    if (stream.str_is_empty(av[2], av[3]))
    {
        std::cout << "Error: strings can not be emplty !\n";
        return (1);
    }
    if (!stream.replace(av[2], av[3]))
    {
        std::cout << "Error:File innaccessible or non existing .\n";
        return (1);
    }
    return (0);
}