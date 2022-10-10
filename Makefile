NAME= libftprintf.a

.SILENT:

SRC= ft_printf.c \
     ft_putstr.c \
ft_putnbr.c \
ft_put_unsignednb.c \
ft_puthexa.c \
ft_check_condition.c \
ft_putchar.c

OBJS= $(SRC:%.c=%.o)

CFLAGS= -Wall -Wextra -Werror

AR= ar rcs

RM= rm -f

all: $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)
	echo "Compiled"

clean:
	$(RM) $(OBJS)
	echo "Removed .o files"

fclean: clean
	$(RM) $(NAME)
	echo "Removed .a files"

re: fclean $(NAME)

.PHONY: all clean fclean re
