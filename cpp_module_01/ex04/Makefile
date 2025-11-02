Name= Sed

CC= g++ -std=c++98
FLAGS= -Wall -Wextra -Werror 
src=  main.cpp Sed.cpp
 
all: $(Name)

$(Name): $(src)
	$(CC) $(FLAGS) -o $@ $?

fclean: 
	rm -f $(Name)

re: fclean all
