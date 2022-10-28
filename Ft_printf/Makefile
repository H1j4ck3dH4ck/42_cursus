NAME = libftprintf.a

SRCS = ft_printf.c\
	   ft_printchar.c\
	   ft_printstr.c\
	   ft_printint.c\
	   ft_printpt.c\
	   ft_printhexamin.c\
	   ft_printhexamax.c

CC = gcc

RM = rm -f

AR = ar -rcs

FLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:.c=.o}

DEPS = $(SRCS:.c=.d)
.c.o:
	${CC} ${FLAGS} -MMD ${INCLUDE} -c $< -o $@

all: ${NAME}

-include $(DEPS)

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

clean:
	${RM} ${OBJS} ${DEPS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re .c.o
