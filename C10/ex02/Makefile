NAME = ft_tail

SRC = ft_tail.c

OBJECT = ft_tail.o

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