NAME			= libft.a

SOURCE			= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

SOURCE_PATH		= ${addprefix ${SOURCE_DIR}, ${SOURCE}}

OBJECTS			= ${SOURCE_PATH:.c=.o}

SOURCE_DIR		= ./srcs/

HEAD			= ./includes/

AR				= ar rc

RM				= rm -f

LIB				= ranlib

CC				= cc

FLAGS			= -Wall -Wextra -Werror

all:		${NAME}

.c.o:
			${CC} ${FLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}:	${OBJECTS}
			${AR} ${NAME} ${OBJECTS}
			${LIB} ${NAME}

clean:
			rm -f ${OBJECTS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
