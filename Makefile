NAME= libftprintf.a

SRC= ft_printf.c

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
