# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 13:37:44 by yodahani          #+#    #+#              #
#    Updated: 2023/10/19 12:12:54 by yodahani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98
RM= rm -rf
NAME= phonebook
SRCS= PhoneBook.cpp Contact.cpp main.cpp 

OBJS= ${SRCS:.cpp=.o}

all:${NAME}

${NAME}:${OBJS}
	${CC} ${CPPFLAGS} ${OBJS} -o $(NAME)

clean:
	${RM} ${OBJS}

fclean:clean
	${RM} ${NAME}

re:fclean all
