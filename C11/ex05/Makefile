NAME = do-op

SOURCE = srcs/ft_write_res.c srcs/ft_do_op.c srcs/ft_ops.c

OBJECTS = ft_write_res.o ft_do_op.o ft_ops.o

HEAD = ./includes/

RM = rm -f

CC = cc

FLAGS = -c -Wall -Werror -Wextra

all: $(NAME)

${NAME}:
	$(CC) $(FLAGS) $(SOURCE) -I $(HEAD)
	$(CC) $(OBJECTS) -o $(NAME)


clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all