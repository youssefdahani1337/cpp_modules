# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 13:37:44 by yodahani          #+#    #+#              #
#    Updated: 2023/10/19 13:05:08 by yodahani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98
RM= rm -rf
NAME= GlobalBanksters
SRCS= tests.cpp Account.cpp
HEADER= Account.hpp
OBJS= ${SRCS:.cpp=.o}

all:${NAME}

${NAME}:${OBJS}
	${CC} ${CPPFLAGS} ${OBJS} -o $(NAME)
%.o:%.cpp $(HEADER)
	${CC} ${CPPFLAGS}  -c $< -o $@
clean:
	${RM} ${OBJS}

fclean:clean
	${RM} ${NAME}

re:fclean all
