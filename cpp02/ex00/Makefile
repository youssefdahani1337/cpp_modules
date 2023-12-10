CXX=c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
RM= rm -rf
NAME= Fixed
SRCS= Fixed.cpp  main.cpp
HEADERS = Fixed.hpp
OBJS= ${SRCS:.cpp=.o}

all:${NAME}

${NAME}:${OBJS} $(HEADERS)
	${CXX} ${CXXFLAGS} ${OBJS} -o $(NAME)

clean:
	${RM} ${OBJS}

fclean:clean
	${RM} ${NAME}

re:fclean all
