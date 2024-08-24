#include <iostream>
#include <cctype>

int main(int ac, char **argv)
{
    if (ac > 1)
    {
        for(int i = 1; i < ac; i++)
        {
            for (int j = 0; argv[i][j]; j++)
            {
                std::cout<< (char)std::toupper((int)argv[i][j]);
            }
            std::cout << " ";
        }
        std::cout << "\n";
        // for (int i = 1; i < ac; i++)
        // {
        //     char *str = argv[i];
        //     while(*str)
        //     {
        //         std::cout << (char)std::toupper((int)*str++);
        //     }
        //     std::cout << " ";
        // }
        // std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE NOISE *" << "\n";

    return (0);
}