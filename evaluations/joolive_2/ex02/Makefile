SRCSPATH = ./srcs/
SRCSFILES = ft_file.c ft_tail.c ft_utils.c
SRCS = $(addprefix $(SRCSPATH), $(SRCSFILES))
OBJS = $(SRCS:.c=.o)

HEADPATH = ./includes/
HEADFILES = ft_head.h
HEADS = $(addprefix $(HEADPATH), $(HEADFILES))

CC = cc
CFLAGS = -Wall -Wextra -Werror

default: all

all: ft_tail

ft_tail: $(OBJS)
	$(CC) -o ft_tail $(OBJS)

%.o: %.c $(HEADS)
	$(CC) $(CFLAGS) -I$(HEADPATH) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f ft_tail

re: fclean all

.PHONY: all clean fclean re
