NAME = libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra -g

SRC = ft_lstnew.c ft_atoi.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_strmapi.c ft_putchar_fd.c ft_striteri.c ft_substr.c ft_itoa.c ft_strtrim.c ft_strjoin.c ft_isalnum.c ft_strnstr.c ft_memchr.c ft_isprint.c ft_memmove.c ft_strchr.c ft_strlcpy.c ft_strncmp.c ft_bzero.c ft_isalpha.c ft_memcmp.c ft_memset.c ft_strdup.c ft_strlen.c ft_strrchr.c ft_calloc.c ft_isdigit.c ft_memcpy.c ft_split.c ft_strlcat.c ft_tolower.c ft_toupper.c ft_isascii.c

BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c

HEADERS = libft.h

OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

breaker:
	$(CC) -nostartfiles -shared -fPIC -ldl $(CFLAGS) -o libft.so $(SRC) $(SRCBONUS)

clean:
	rm -f $(OBJ) $(BONUS_OBJ) $(TESTBIN)

fclean: clean
	rm -f $(NAME) $(TESTBIN)
re: fclean all

.PHONY: clean fclean