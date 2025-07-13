NAME = libft.a
SRCDIR = srcs/
INCDIR = includes/
SRC = $(wildcard $(SRCDIR)*.c)
OBJ = $(SRC:$(SRCDIR)%.c=$(SRCDIR)%.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs
RM = rm -f
.PHONY: all clean fclean

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $^
	echo "Creating" $(NAME)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $< -o $@
	echo "Compiling object code" $@ 

clean:
	$(RM) $(wildcard $(OBJ))
	echo "Deleting objects code" $(OBJ)

fclean: clean
	$(RM) $(NAME)
	echo "Removing" $(NAME)

re: fclean all
