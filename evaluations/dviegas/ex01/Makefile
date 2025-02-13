CC:=cc
CFLAGS := -Wall -Wextra -Werror
NAME:= libft.a
SRC_DIR:=srcs
INC_DIR:=includes
SRC_FILES:= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJ_FILES := $(SRC_FILES:%.c=$(SRC_DIR)/%.o)

all: $(NAME)

$(NAME) : $(OBJ_FILES)
	@ar rc $(NAME) $(OBJ_FILES)
	@echo "Library $(NAME) Created"

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c | $(INC_DIR)/ft.h
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $<"

clean:
	@rm -f $(OBJ_FILES)
	@echo "Object files removed"

fclean: clean
	@rm -f $(NAME)
	@echo "Library $(NAME) removed"

re: fclean all
