NAME = libftprintf.a

.SILENT:

SRC =	ft_printf.c \
 		ft_putchar.c \
		ft_puthexa.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_put_unsignednb.c \
		ft_strlen.c \
		ft_check_condition.c
		
CFLAGS = -Wall -Werror -Wextra
AR = ar rc
OBJS = $(SRC:%.c=%.o)

all : $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	echo "Compilado"

clean:
	rm -rf $(OBJS)
	echo "Archivos .o elminados"

fclean: clean
	rm -rf $(NAME)
	echo "Archivos .o .a elimiandos"

re: fclean all

.PHONY: all clean fclean re
