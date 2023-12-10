CXX=c++

CXXFLAGS=-Wall -Wextra -Werror -std=c++98 

RM = rm -rf 
SRCS= main.cpp Bureaucrat.cpp Form.cpp

OBJS=$(SRCS:.cpp=.o)

NAME=form 
HEADERS= Bureaucrat.hpp Form.hpp
all:$(NAME)

$(NAME):$(OBJS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME) 
re:fclean all

