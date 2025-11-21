#ifndef FragTrap_hpp
#define FragTrap_hpp

#include <iostream>
#include "ClapTrap.hpp"


class FragTrap : public ClapTrap{
    public:
        FragTrap();
        FragTrap(std::string Name);
        FragTrap(const FragTrap& other);
        FragTrap& operator=(const FragTrap& other);
        ~FragTrap();

        void highFivesGuys(void);
};


#endif