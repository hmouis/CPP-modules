Name= Sed

CC= c++
FLAGS= -Wall -Wextra -Werror -std=c++98
src=  main.cpp Sed.cpp
 
all: $(Name)

$(Name): $(src)
	$(CC) $(FLAGS) -o $@ $?

fclean: 
	rm -f $(Name)

re: fclean all
