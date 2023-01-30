SRC_DIR := src
OBJ_DIR := build

SRCS := $(wildcard $(SRC_DIR)/*.c)
OBJS := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))

BIN := ft_display_file


CC := gcc
LD := gcc

CFLAGS := -Wall -Wextra -Werror -c
LDFLAGS0 := 

all: $(BIN)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(BIN)

re: fclean all

$(BIN): $(OBJS)
	mkdir -p $(@D)
	$(LD) $(LDFLAGS) -o $(BIN) $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -o $(@:.c=.o) $<

.PHONY: all clean fclean re
