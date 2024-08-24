name = megaphone

CC = c++
FLAGS = -Wall -Wextra -Werror

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

all: $(name)

$(name): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(name)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@ 	### $< fisierul sursa // $@ - tinta

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(name)

re: fclean all

.Phony: all clean fclean re