NAME = ft_cat
SRCDIR = srcs/
OBJDIR = objs/
INCDIR = includes/
SRC = $(wildcard $(SRCDIR)*.c)
OBJ = $(SRC:$(SRCDIR)%=$(OBJDIR)%.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -f
.PHONY: all clean fclean

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $^ -o $@

$(OBJ): $(OBJDIR)%.o: $(SRCDIR)%
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
