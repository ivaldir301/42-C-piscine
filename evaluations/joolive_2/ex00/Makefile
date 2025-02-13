SRCSPATH = ./srcs/
SRCSFILES = ft_display_file.c
SRCS = $(addprefix $(SRCSPATH), $(SRCSFILES))
OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

default: all

all: ft_display_file

ft_display_file: $(OBJS)
	$(CC) -o ft_display_file $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f ft_display_file

re: fclean all

.PHONY: all clean fclean re
