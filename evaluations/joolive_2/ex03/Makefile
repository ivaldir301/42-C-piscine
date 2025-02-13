SRCSPATH = ./srcs/
SRCSFILES = ft_utils.c ft_hexdump.c
SRCS = $(addprefix $(SRCSPATH), $(SRCSFILES))
OBJS = $(SRCS:.c=.o)

HEADPATH = ./includes/
HEADFILES = ft_head.h
HEADS = $(addprefix $(HEADPATH), $(HEADFILES))

CC = cc
CFLAGS = -Wall -Wextra -Werror

default: all

all: ft_hexdump

ft_hexdump: $(OBJS)
	$(CC) -o ft_hexdump $(OBJS)

%.o: %.c $(HEADS)
	$(CC) $(CFLAGS) -I$(HEADPATH) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f ft_hexdump

re: fclean all

.PHONY: all clean fclean re
