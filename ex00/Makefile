# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 18:52:44 by mproveme          #+#    #+#              #
#    Updated: 2022/11/04 14:48:38 by mproveme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp\
			ClapTrap.cpp


OBJS	= 	$(SRCS:.cpp=.o)

HEAD	=	ClapTrap.hpp
			
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf

NAME	=	trap

all:		$(NAME)

%.o:		%.cpp	$(HEAD) 
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS) $(HEAD) 
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:		
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re 