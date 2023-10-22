CC=c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98
RM= rm -rf
NAME= Zombie
SRCS= main.cpp  Zombie.cpp newZombie.cpp randomChump.cpp
HEADERS = Zombie.hpp
OBJS= ${SRCS:.cpp=.o}

all:${NAME}

${NAME}:${OBJS} $(HEADERS)
	${CC} ${CPPFLAGS} ${OBJS} -o $(NAME)

clean:
	${RM} ${OBJS}

fclean:clean
	${RM} ${NAME}

re:fclean all
