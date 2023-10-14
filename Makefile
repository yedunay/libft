DOTC = ft_atoi.c ft_isalpha.c ft_itoa.c ft_memmove.c ft_strdup.c ft_strlcpy.c ft_strnstr.c ft_tolower.c \
ft_bzero.c ft_isascii.c ft_memchr.c ft_memset.c ft_strlen.c ft_toupper.c \
ft_calloc.c ft_isdigit.c ft_memcmp.c ft_substr.c ft_strrchr.c ft_strjoin.c\
ft_isalnum.c ft_isprint.c ft_memcpy.c  ft_strchr.c ft_strlcat.c ft_strncmp.c\
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strtrim.c


NAME = libft.a
OBJECTS = $(DOTC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(DOTC)
	ar rcs $@ $(OBJECTS)

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re