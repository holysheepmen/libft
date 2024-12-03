SRC = $(addsuffix .c, ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_memchr ft_memcmp ft_strnstr ft_atoi ft_calloc ft_strdup ft_itoa ft_split ft_strjoin ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd ft_striteri ft_strmapi ft_strtrim ft_substr)
OBJ := $(SRC:%.c=%.o)

NAME = libft.a
CC = cc
CCFLAGS = -Wall -Wextra -Werror


all:	$(NAME)

%.o: %.c
	$(CC) $(CCFLAGS) -I. -c $< -o $@

$(NAME): $(OBJ) libft.h
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
