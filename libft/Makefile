NAME = libft.a

SRC = ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c\
ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
ft_toupper.c ft_tolower.c ft_strdup.c ft_memccpy.c\
ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlcpy.c ft_strlcat.c\
ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_putchar_fd.c\
ft_putstr_fd.c  ft_substr.c ft_strjoin.c ft_strmapi.c ft_putendl_fd.c


BONUS_SRC = ft_lstnew.c ft_lstadd_front.c
OBJ = $(SRC:.c=.o)

BONUS_OBJ = $(BONUS_SRC:.c=.o)

FLAGS = gcc -g -Wall -Werror -Wextra -c

$(NAME): ${OBJ}
	$(FLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
bonus:
	$(FLAGS) $(BONUS_SRC)
	ar rc $(NAME) $(BONUS_OBJ)
	ranlib $(NAME)
all: $(NAME)
clean:
	rm -f $(OBJ) $(BONUS_OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all bonus clean fclean re