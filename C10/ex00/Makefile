NAME = ft_display_file

SRC = ft_display_file.c

OBJECT = ft_display_file.o

CC = cc

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	${CC} ${FLAGS} -c $(SRC) 
	${CC} -o $(NAME) $(OBJECT)	

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all