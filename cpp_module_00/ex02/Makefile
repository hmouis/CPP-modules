Name= Account

src= Account.cpp tests.cpp

obj= $(src:.cpp=.o)

all: $(Name)

$(Name): $(obj)
	c++ -o $@ $?

clean:
	rm -f $(obj)

fclean: clean
	rm -f $(Name)

re: fclean all