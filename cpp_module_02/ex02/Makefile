Name= FixedPoint

src= main.cpp Fixed.cpp

CC= c++
CFLAGS=  -std=c++98

all: $(Name)

$(Name): $(src)
	$(CC) $(CFLAGS) -o $@ $(src)

fclean:
	rm -f $(Name)

re: fclean all
