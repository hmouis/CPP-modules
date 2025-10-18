Name= Phonebook

CC= g++ -std=c++98
FLAGS= -Wall -Wextra -Werror
src= main.cpp PhoneBook.cpp Contact.cpp
obj= $(src:.cpp=.o)

all: $(Name)

$(Name): $(obj)
	$(CC) $(FLAGS) -o $@ $?

clean:
	rm -f $(obj)

fclean: clean
	rm -f $(Name)

re: fclean all