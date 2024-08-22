CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = bsq
OBJS = main.o map.o solve.o utils.o print.o

all: $(NAME)

$(NAME): $(OBJS) 
	$(CC) $(CFLAGS) -o $@ $(OBJS)

%.o: %.c bsq.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re