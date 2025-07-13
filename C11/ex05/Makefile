NAME = do_op
SRCDIR = srcs/
OBJDIR = objs/
INCDIR = includes/

SRC = $(wildcard $(SRCDIR)*.c)
OBJ = $(SRC:$(SRCDIR)%=$(OBJDIR)%.o)
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	cc $(CFLAGS) $^ -o $@

$(OBJ): $(OBJDIR)%.o: $(SRCDIR)% 
	cc $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(wildcard $(OBJDIR)*.o)

fclean: clean
	$(RM) $(NAME)

.PHONY: all clean fclean
