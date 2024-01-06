NAME = ft_hexdump

SRC = ft_hexdump.c ft_hexdump2.c

OBJECT = ft_hexdump.o ft_hexdump2.o

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