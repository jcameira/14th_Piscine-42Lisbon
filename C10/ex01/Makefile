NAME = ft_cat

SRC = ft_cat.c

OBJECT = ft_cat.o

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