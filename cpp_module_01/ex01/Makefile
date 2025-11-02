Name= Zombie

CC= g++
CFLAGS= -Wall -Wextra -Werror -std=c++98
src= Zombie.cpp main.cpp zombieHorde.cpp
 
all: $(Name)

$(Name): $(src)
	$(CC) $(CFLAGS) -o $@ $?

fclean:
	rm -f $(Name)

re: fclean all
