Name= War

CC= g++ 
CFLAGS= -Wall -Wextra -Werror -std=c++98

src= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

all: $(Name)

$(Name): $(src)
	$(CC) $(CFLAGS) -o $@ $?

fclean: 
	rm -f $(Name)

re: fclean all
