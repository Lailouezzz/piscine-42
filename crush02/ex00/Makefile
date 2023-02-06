SRC_DIR := src
INC_DIR := include
OBJ_DIR := build
SRCS := $(wildcard $(SRC_DIR)/*.c)
OBJS := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))

NAME := rush-02

CFLAGS := -Wall -Wextra -Werror -g -I $(INC_DIR)

all: $(NAME)

LD := cc

CC := cc

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(NAME): $(OBJS)
	$(LD) -o $@ $^
	norminette -R CheckDefine

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -c -o $@ $<

.PHONY: all clean fclean re
