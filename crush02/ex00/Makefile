SRC_DIR := src
INC_DIR := include
OBJ_DIR := build
SRCS := $(wildcard $(SRC_DIR)/*.c)
OBJS := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))

BIN := rush-02

CFLAGS := -Wall -Wextra -Werror -g -I $(INC_DIR)

all: $(BIN)

LD := gcc

CC := gcc

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(BIN)

re: fclean all

$(BIN): $(OBJS)
	$(LD) -o $@ $^
	norminette -R CheckDefine

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -c -o $@ $<

.PHONY: all clean fclean re .c.o
