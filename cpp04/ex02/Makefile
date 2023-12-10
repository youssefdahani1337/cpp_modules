CXX=c++

CXXFLAGS=-Wall -Wextra -Werror -std=c++98

SRCS=AAnimal.cpp Cat.cpp Dog.cpp main.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp

OBJS=$(SRCS:.cpp=.o)

NAME=abstract
HEADERS=AAnimal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp  WrongCat.hpp Brain.hpp
all:$(NAME)

$(NAME):$(OBJS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re:fclean all

