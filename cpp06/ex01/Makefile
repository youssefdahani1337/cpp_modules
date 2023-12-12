CXX=c++

CXXFLAGS= -Wall -Wextra -Werror -std=c++98
RM = rm -rf
NAME = Serializer

SRCS= main.cpp Serializer.cpp Data.cpp
HEADERS= Serializer.hpp Data.hpp

OBJS=$(SRCS:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)
fclean:clean
	$(RM) $(NAME)

re: fclean all
