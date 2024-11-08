# NAME = libft.a

# SRC = 		ft_isalpha.c\
#             ft_isdigit.c\
#             ft_isalnum.c\
#             ft_isascii.c\
#             ft_isprint.c\
#             ft_strlen.c\
#             ft_memset.c\
#             ft_bzero.c\
#             ft_memcpy.c\
#             ft_memmove.c\
#             ft_toupper.c\
#             ft_tolower.c\
#             ft_strchr.c\
#             ft_strrchr.c\
#             ft_strncmp.c\
#             ft_memchr.c\
#             ft_memcmp.c\
#             ft_atoi.c\
#             ft_strlcpy.c\
#             ft_strlcat.c\
#             ft_strnstr.c\
#             ft_calloc.c\
#             ft_strdup.c\
#             ft_substr.c\
#             ft_strjoin.c\
#             ft_strtrim.c\
#             ft_split.c\
#             ft_strmapi.c\
#             ft_putchar_fd.c\
#             ft_putendl_fd.c\
#             ft_putstr_fd.c\
#             ft_putnbr_fd.c\
#             ft_striteri.c\
#             ft_itoa.c

# OBJ = $(SRC:.c=.o);

# CC = cc
# CFLAGS = -Wall -Wextra -Werror

# SRC_B =		ft_lstnew_bonus.c\
#             ft_lstadd_front_bonus.c\
#             ft_lstsize_bonus.c\
#             ft_lstlast_bonus.c\
#             ft_lstadd_back_bonus.c\
#             ft_lstdelone_bonus.c\
#             ft_lstclear_bonus.c\
#             ft_lstiter_bonus.c

# OBJ_B =  $(SRC_B:.c=.o)

# all: $(NAME)

# bonus: $(OBJ_B)
# 	ar rcs $(NAME) $(OBJ_B)

# $(NAME): $(OBJ)
# 	ar rcs $(NAME) $(OBJ)

# clean:
# 	rm -f $(OBJ) $(OBJ_B)

# fclean: clean
# 	rm -f $(NAME)

# re: fclean all

# .PHONY: all clean fclean re

NAME = libft.a
CFLAGS = -Wextra -Werror -Wall
RM = rm -f
SOURCES = 	ft_isalpha.c\
			ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_strlen.c\
			ft_memset.c\
			ft_bzero.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strncmp.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_atoi.c\
			ft_strlcpy.c\
			ft_strlcat.c\
			ft_strnstr.c\
			ft_calloc.c\
			ft_strdup.c\
			ft_substr.c\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_split.c\
			ft_strmapi.c\
			ft_putchar_fd.c\
			ft_putendl_fd.c\
			ft_putstr_fd.c\
			ft_putnbr_fd.c\
			ft_striteri.c\
			ft_itoa.c\

SOURCES_B = ft_lstnew_bonus.c\
			ft_lstadd_front_bonus.c\
			ft_lstsize_bonus.c\
			ft_lstlast_bonus.c\
			ft_lstadd_back_bonus.c\
			ft_lstdelone_bonus.c\
			ft_lstclear_bonus.c\
			ft_lstiter_bonus.c\
			ft_lstmap_bonus.c\

OBJECTS = $(SOURCES:.c=.o)

OBJECTS_B = $(SOURCES_B:.c=.o)

all :	$(NAME)

bonus: $(OBJECTS_B)
	ar -rc $(NAME) $(OBJECTS_B)

$(NAME) :	$(OBJECTS)
	ar -rc $(NAME) $(OBJECTS)

clean :
		$(RM) $(OBJECTS) $(OBJECTS_B)
fclean : clean
		$(RM) $(NAME)
re : fclean all

.PHONY: all clean fclean re