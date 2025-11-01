Name= PhoneBook

CC= c++
CFLAGS= -Wall -Wextra -Werror -std=c++98
src= main.cpp PhoneBook.cpp Contact.cpp

all: $(Name)

$(Name): $(src)
	$(CC) $(CFLAGS) -o $@ $?

fclean:
	rm -f $(Name)

re: fclean all