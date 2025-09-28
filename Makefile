NAME = libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra -g

SRC = ft_atoi.c ft_substr.c ft_strjoin.c ft_isalnum.c ft_strnstr.c ft_memchr.c ft_isprint.c ft_memmove.c ft_strchr.c ft_strlcpy.c ft_strncmp.c ft_bzero.c ft_isalpha.c ft_memcmp.c ft_memset.c ft_strdup.c ft_strlen.c ft_strrchr.c ft_calloc.c ft_isdigit.c ft_memcpy.c ft_split.c ft_strlcat.c ft_tolower.c ft_toupper.c ft_isascii.c

HEADERS = libft.h

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TESTBIN)

fclean: clean
	rm -f $(NAME) $(TESTBIN)
re: fclean all

.PHONY: clean fclean