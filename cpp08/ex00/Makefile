CXX=c++
CXXFLAGS=-Wall -Werror -Wextra -std=c++98
RM=rm -rf
NAME=easyfind

SRCS= main.cpp
HEADERS=easyfind.hpp
OBJS=$(SRCS:.cpp=.o) 

all:$(NAME) $(HEADERS)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)
fclean:clean
	$(RM) $(NAME)
re:fclean all
