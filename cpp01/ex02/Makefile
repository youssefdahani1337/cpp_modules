CC=c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98
RM= rm -rf
NAME= ptryref
SRCS= main.cpp

OBJS= ${SRCS:.cpp=.o}

all:${NAME}

${NAME}:${OBJS}
	${CC} ${CPPFLAGS} ${OBJS} -o $(NAME)

clean:
	${RM} ${OBJS}

fclean:clean
	${RM} ${NAME}

re:fclean all
