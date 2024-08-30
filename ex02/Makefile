name = Account

CFLAGS = -Wall -Wextra -Werror -std=c++98 
CC = c++

SRC = Account.cpp tests.cpp
OBJ = $(SRC:.cpp=.o)

all: $(name)

$(name): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(name)

%.o: %.cpp
	$(CC) $(CFLAGS)  -c $< -o $@ 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(name)

re: fclean all

.PHONY: all clean fclean re


