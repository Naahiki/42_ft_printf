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
		
AR = ar rc
OBJS = $(SRC:%.c=%.o)

all : $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	echo "Compiled"

clean:
	rm -rf $(OBJS)
	echo "Removed .o files"

fclean: clean
	rm -rf $(NAME)
	echo "Removed .a file"

re: fclean all

.PHONY: all clean fclean re
