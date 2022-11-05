NAME = libft.a
CC = gcc
CFLAGS =-Wall -Wextra -Werror
AR = ar -r
LIBFT_H = ./libft.h
BONUS = bonus.a
FILES =./ft_memset.c\
		./ft_bzero.c\
		./ft_memcpy.c\
		./ft_memmove.c\
		./ft_memchr.c\
		./ft_memcmp.c\
		./ft_strlen.c\
		./ft_strlcpy.c\
		./ft_strchr.c\
		./ft_strrchr.c\
		./ft_strnstr.c\
		./ft_strncmp.c\
		./ft_atoi.c\
		./ft_isalpha.c\
		./ft_isdigit.c\
		./ft_isalnum.c\
		./ft_isascii.c\
		./ft_isprint.c\
		./ft_toupper.c\
		./ft_tolower.c\
		./ft_calloc.c\
		./ft_strlcat.c\
		./ft_strdup.c\
		./ft_substr.c\
		./ft_strjoin.c\
		./ft_strtrim.c\
		./ft_split.c\
		./ft_itoa.c\
		./ft_strmapi.c\
		./ft_striteri.c\
		./ft_putchar_fd.c\
		./ft_putstr_fd.c\
		./ft_putendl_fd.c\
		./ft_putnbr_fd.c

BOUNUS_FILES = ./ft_lstnew.c\
				./ft_lstadd_front.c\
				./ft_lstsize.c\
				./ft_lstlast.c\
				./ft_lstadd_back.c\
				./ft_lstdelone.c\
				./ft_lstclear.c\
				./ft_lstiter.c\
				./ft_lstmap.c
				

OBJS =$(FILES:.c=.o)


OBJS_BOUNUS = $(BOUNUS_FILES:.c=.o)





$(OBJS): $(FILES) $(LIBFT_H)
	$(CC) -c $(CFLAGS) $^

$(OBJS_BOUNUS) : $(BOUNUS_FILES) $(LIBFT_H)
	$(CC) -c $(CFLAGS) $^



$(NAME): $(OBJS) 
	$(AR)  $(NAME) $^


$(BONUS) : $(OBJS_BOUNUS)
	$(AR)  $(NAME) $^

all: $(NAME) $(BONUS)

clean:
	$(RM) $(OBJS) 

fclean: clean
	$(RM) $(NAME) $(BONUS) $(OBJS_BOUNUS)
bonus : $(BONUS)
re: clean all

.PHONY: bonus all clean fclean re