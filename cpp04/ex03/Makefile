CXX=c++

CXXFLAGS=-Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
SRCS= AMateria.cpp Character.cpp Cure.cpp Ice.cpp main.cpp MateriaSource.cpp List.cpp
OBJS=$(SRCS:.cpp=.o)

NAME=Interface
HEADERS= AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp List.hpp
all:$(NAME)

$(NAME):$(OBJS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re:fclean all

