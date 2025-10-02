Name= Account

CC= c++
FLAGS= -Wall -Wextra -Werror
src= Account.cpp tests.cpp
obj= $(src:.cpp=.o)

all: $(Name)

$(Name): $(obj)
	$(CC) $(FLAGS) -o $@ $?

clean:
	rm -f $(obj)

fclean: clean
	rm -f $(Name)

re: fclean all