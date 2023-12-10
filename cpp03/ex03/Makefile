CXX=c++
CXXFLAGS= -Wall -Wextra -Werror   -std=c++98
RM=rm -rf
NAME=Diamond
HEADERS=ClapTrap.hpp FragTrap.hpp ScavTrap.hpp DiamondTrap.hpp
SRCS= main.cpp ClapTrap.cpp ScavTrap.cpp DiamondTrap.cpp FragTrap.cpp

OBJS=${SRCS:.cpp=.o}

all:${NAME}

${NAME}:$(OBJS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)
fclean:clean
	$(RM) $(NAME)

re:fclean all

.PHONY:all clean fclean re