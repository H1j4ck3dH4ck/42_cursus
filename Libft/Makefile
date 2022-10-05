NAME = libft.a

INCLUDE = -I ./

SRCS = ft_bzero.c\
	   ft_isdigit.c\
	   ft_isalpha.c\
	   ft_isalnum.c\
	   ft_isascii.c\
	   ft_isprint.c\
	   ft_memchr.c\
	   ft_memcmp.c\
	   ft_memcpy.c\
	   ft_memmove.c\
	   ft_memset.c\
	   ft_strchr.c\
	   ft_strlcat.c\
	   ft_strlcpy.c\
	   ft_strlen.c\
	   ft_strncmp.c\
	   ft_strrchr.c\
	   ft_tolower.c\
	   ft_toupper.c\
	   ft_strnstr.c\
	   ft_atoi.c\
	   ft_calloc.c\
	   ft_strdup.c\
	   ft_substr.c\
	   ft_strjoin.c\
	   ft_strtrim.c\
	   ft_itoa.c\
	   ft_split.c


OBJS = $(SRCS:.c=.o)

DEPS = $(SRCS:.c=.d)

AR = ar
CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	$(CC) $(CFLAGS) -MMD $(INCLUDE) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) -rcs $(NAME) $(OBJS)

-include $(DEPS)

clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

