#include <iostream>

int main(int ac, char **av)
{
    int i, j;
    char c;

    i = 0;
    j = 1;
    if (ac == 1)
    {
        std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n" ;
        return 0;
    }
    else
    {
        while (av[j])
        {
            i = 0;
            while (av[j][i])
            {
                if (isalpha(av[j][i]))
                {
                    c = av[j][i] - 32 ;
                    std::cout<< c ;
                }
                else
                    std::cout<< av[j][i];
                i++;
            }
            j++;
        }
    }   
    std::cout<< "\n";
    return 0;
}












