SRC = $(addsuffix .c, ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_memchr ft_memcmp ft_strnstr ft_atoi ft_calloc ft_strdup ft_itoa ft_split ft_strjoin ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd ft_striteri ft_strmapi ft_strtrim ft_substr)
OBJ := $(SRC:%.c=%.o)

SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJ_BONUS := $(SRC_BONUS:%.c=%.o)

NAME = libft.a
CC = cc
CCFLAGS = -Wall -Wextra -Werror


%.o: %.c libft.h
	$(CC) -I $(CCFLAGS) -c $< -o $@

all:	$(NAME)

$(NAME): $(OBJ) libft.h
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

bonus : $(OBJ) $(OBJ_BONUS) libft.h
	ar rcs $(NAME) $(OBJ) $(OBJ_BONUS)
	ranlib $(NAME)

so:
	cc -fPIC -shared -Wall -Wextra -Werror ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_itoa.c ft_split.c ft_strjoin.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_striteri.c ft_strmapi.c ft_strtrim.c ft_substr.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c -o libft.so

clean:
	rm -rf $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re bonus
