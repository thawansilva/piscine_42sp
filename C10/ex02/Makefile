NAME = ft_tail
SRCDIR  = srcs/
ODIR = objs/
IDIR = includes/
SRC = $(wildcard $(SRCDIR)*.c)
OBJS = $(SRC:$(SRCDIR)%=$(ODIR)%.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $^ -o $@

$(OBJS): $(ODIR)%.o: $(SRCDIR)%
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(ODIR)*.o

fclean: clean
	$(RM) $(NAME)

.PHONY: all clean fclean
