SRCS := srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS := $(SRCS:.c=.o)

LIB_A := libft.a

INCLUDES := includes/

CFLAGS := -Wall -Wextra -Werror -I $(INCLUDES) -c

all: $(LIB_A)

clean:
	rm -f srcs/*.o

fclean: clean
	rm -f $(LIB_A) 

re: fclean all

$(LIB_A): $(OBJS)
	ar rc $@ $^

.c.o: $(SRCS)
	gcc $(CFLAGS) -o $(<:.c=.o) $<

.PHONY: all clean fclean re
