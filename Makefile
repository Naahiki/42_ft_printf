# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrodrigu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/30 15:13:32 by nrodrigu          #+#    #+#              #
#    Updated: 2022/10/06 19:26:37 by nrodrigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libftprintf.a

.SILENT:

SRC= ft_printf.c \
	 ft_putchar.c \
	 ft_putstr.c \
	 ft_check_condition.c \
	 ft_puthexa.c \
	 ft_strlen.c \
	 ft_put_unsignednb.c \
	 ft_putnbr.c \

OBJS= $(SRC:%.c=%.o)

CFLAGS= -Wall -Wextra -Werror

AR= ar rcs

RM= rm -f

all: $(NAME)

$(NAME) : $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "Compiled"

clean:
	@$(RM) $(OBJS)
	@echo "Removed .o files"

fclean: clean
	@$(RM) $(NAME)
	@echo "Removed .a files"

re: fclean $(NAME)

.PHONY: all clean fclean re
