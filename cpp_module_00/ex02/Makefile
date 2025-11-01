Name= Account

CC= c++ 
CFLAGS= -Wall -Wextra -Werror -std=c++98
src= Account.cpp tests.cpp

all: $(Name)

$(Name): $(src)
	$(CC) $(CFLAGS) -o $@ $?

fclean:
	rm -f $(Name)

re: fclean all