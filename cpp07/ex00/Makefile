
CXXC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp
HEADERS = whatever.hpp

OBJS = $(SRCS:.cpp=.o)

NAME = swap

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
