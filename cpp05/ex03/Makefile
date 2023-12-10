CXX=c++

CXXFLAGS=-Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

RM = rm -rf 
SRCS= main.cpp  Bureaucrat.cpp AForm.cpp  ShrubberyCreationForm.cpp   PresidentialPardonForm.cpp RobotomyRequestForm.cpp Intern.cpp

OBJS=$(SRCS:.cpp=.o)

NAME=form 
HEADERS= Bureaucrat.hpp  AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp

all:$(NAME)

$(NAME):$(OBJS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME) 
re:fclean all

