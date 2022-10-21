# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbousouf <mbousouf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/09 18:24:09 by daelee            #+#    #+#              #
#    Updated: 2022/10/21 13:10:45 by mbousouf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar -r
LIBFT_H = ./libft.h


FILES = ./ft_memset.c\
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
		./ft_strdup.c





OBJS =$(FILES:.c=.o)



%: $(FILES) $(LIBFT_H)
	$(CC) $(CFLAGS)

$(NAME): $(OBJS)
	$(AR)  $@  $^



all: $(NAME)

clean:
	$(RM) $(OBJS) 

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: bonus all clean fclean re