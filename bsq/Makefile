SRC_DIR := src
OBJ_DIR := build
INC_DIR := include

SRCS := $(wildcard $(SRC_DIR)/*.c)
OBJS := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))

CC := cc
CFLAGS := -Wall -Wextra -Werror

LD := cc

NAME := bsq

all: $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

$(NAME): $(OBJS)
	$(LD) -o $@ $^

$(OBJ_DIR)/%.o: %(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<
