# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/20 11:14:25 by yodahani          #+#    #+#              #
#    Updated: 2023/10/30 12:25:25 by yodahani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= g++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98
RM= rm -rf
NAME= winner
SRCS= main.cpp   ReplaceFile.cpp
OBJS= ${SRCS:.cpp=.o}

all:${NAME}

${NAME}:${OBJS}
	${CC} ${CPPFLAGS} ${OBJS} -o $(NAME)

clean:
	${RM} ${OBJS}

fclean:clean
	${RM} ${NAME}

re:fclean all