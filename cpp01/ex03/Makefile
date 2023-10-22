# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/20 11:14:25 by yodahani          #+#    #+#              #
#    Updated: 2023/10/20 11:15:45 by yodahani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98
RM= rm -rf
NAME= violence
SRCS= main.cpp  Weapon.cpp HumanA.cpp HumanB.cpp
HEADERS = Weapon.hpp  HumanA.hpp HumanB.hpp
OBJS= ${SRCS:.cpp=.o}

all:${NAME}

${NAME}:${OBJS} $(HEADERS)
	${CC} ${CPPFLAGS} ${OBJS} -o $(NAME)

clean:
	${RM} ${OBJS}

fclean:clean
	${RM} ${NAME}

re:fclean all
