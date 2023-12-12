CXX=c++

CXXFLAGS= -Wall -Wextra -Werror -std=c++98

RM = rm -rf
NAME = convert

SRCS= main.cpp Base.cpp convert.cpp	

HEADERS= Base.hpp convert.hpp A.hpp B.hpp C.hpp

OBJS=$(SRCS:.cpp=.o)

all:$(NAME)
	@echo "Done"
$(NAME):$(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "Compiled $(NAME)"

clean:
	@$(RM) $(OBJS)
fclean:clean
	@$(RM) $(NAME)

re: fclean all

.SILENT:$(OBJS) 