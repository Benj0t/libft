# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bemoreau <bemoreau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/13 19:04:13 by bemoreau          #+#    #+#              #
#    Updated: 2019/11/11 17:53:27 by bemoreau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS_B = 	./ft_lstmap_bonus.c\
			./ft_lstadd_back_bonus.c\
			./ft_lstadd_front_bonus.c\
			./ft_lstclear_bonus.c\
			./ft_lstdelone_bonus.c\
			./ft_lstiter_bonus.c\
			./ft_lstlast_bonus.c\
			./ft_lstnew_bonus.c\
			./ft_lstsize_bonus.c\
			./ft_charset_bonus.c\
			./ft_putendl_bonus.c\
			./ft_putchar_bonus.c\
			./ft_putstr_bonus.c\

SRCS =		./ft_memset.c\
			./ft_bzero.c\
			./ft_memcpy.c\
			./ft_memccpy.c\
			./ft_memmove.c\
			./ft_memchr.c\
			./ft_strlen.c\
			./ft_isalpha.c\
			./ft_isdigit.c\
			./ft_isalnum.c\
			./ft_isascii.c\
			./ft_isprint.c\
			./ft_toupper.c\
			./ft_tolower.c\
			./ft_strchr.c\
			./ft_strrchr.c\
			./ft_strncmp.c\
			./ft_strlcpy.c\
			./ft_strlcat.c\
			./ft_strnstr.c\
			./ft_atoi.c\
			./ft_calloc.c\
			./ft_strdup.c\
			./ft_substr.c\
			./ft_strjoin.c\
			./ft_strtrim.c\
			./ft_split.c\
			./ft_itoa.c\
			./ft_strmapi.c\
			./ft_putchar_fd.c\
			./ft_putstr_fd.c\
			./ft_putendl_fd.c\
			./ft_putnbr_fd.c\
			./ft_memcmp.c\

CC = gcc

AR = ar -rc

FLAGS = -Wall -Wextra -Werror

OBJ = 		$(SRCS:.c=.o)

OBJ_B = 		$(SRCS_B:.c=.o)

.c.o:		${SRCS}
			$(CC) $(FLAGS) -c $< -o ${<:.c=.o}

.PHONY: 	all clean re fclean bonus

all: 		$(NAME)

$(NAME): 	$(OBJ)
			$(AR) $(NAME) $(OBJ)

bonus : $(OBJ)  $(OBJ_B)
		@$(AR) $(NAME) $(OBJ) $(OBJ_B)

clean:
	rm -f $(OBJ) $(OBJ_B)

fclean: clean
	rm -f $(NAME)

re: fclean all