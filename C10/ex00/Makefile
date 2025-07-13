NAME = ft_display_file
OBJDIR = objs/
SRCDIR = srcs/
INCDIR = includes/
RM = rm -f
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = $(wildcard $(SRCDIR)*.c)
OBJ = $(SRC:$(SRCDIR)%=$(OBJDIR)%.o)
.PHONY: all clean fclean

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $^ -o $@

$(OBJ): $(OBJDIR)%.o: $(SRCDIR)%
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(wildcard $(OBJDIR)*.o)

fclean: clean
	$(RM) $(NAME)
