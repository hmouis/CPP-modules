#include <iostream>

int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n" ;
        return 0;
    }
    for(int j = 1; av[j]; j++)
    {
	    for(int i = 0; av[j][i]; i++)
		    std::cout << (char )toupper(av[j][i]);
    }
    std::cout<< "\n";
    return 0;
}
