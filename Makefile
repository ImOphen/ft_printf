NAME = libftprintf.a
CC = gcc
CFLAG = -Wall -Werror -Wextra
CFILES = ft_printf.c print_functions.c
OBJ = $(CFILES:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ) : $(CFILES)
	$(CC) $(CFLAGS) -c $(CFILES)

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all
