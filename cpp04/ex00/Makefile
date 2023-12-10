CXX=c++

CXXFLAGS=-Wall -Wextra -Werror -std=c++98
SRCS=Animal.cpp Cat.cpp Dog.cpp main.cpp WrongCat.cpp WrongAnimal.cpp

OBJS=$(SRCS:.cpp=.o)

NAME=poly
HEADERS=Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp  WrongCat.hpp
all:$(NAME)

$(NAME):$(OBJS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re:fclean all

