Name= Zombie

CC= c++ 
CFLAGS= -Wall -Wextra -Werror -std=c++98
src= Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
 
all: $(Name)

$(Name): $(src)
	$(CC) $(CFLAGS) -o $@ $?

fclean:
	rm -f $(Name)

re: fclean all
