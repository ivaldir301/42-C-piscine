SRCSPATH = ./srcs/
SRCSFILES = ft_cat.c
SRCS = $(addprefix $(SRCSPATH), $(SRCSFILES))
OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

default: all

all: ft_cat

ft_cat: $(OBJS)
	$(CC) -o ft_cat $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f ft_cat

re: fclean all

.PHONY: all clean fclean re
