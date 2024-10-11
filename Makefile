# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/02 18:33:08 by iguillen          #+#    #+#              #
#    Updated: 2024/10/11 15:41:55 by iguillen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

RM = rm -rf

NAME = libft.a

BONUS_NAME = .bonus

SRCS = ft_isalnum.c	 \
	   ft_isascii.c  \
	   ft_isprint.c  \
	   ft_strlen.c   \
	   ft_bzero.c    \
	   ft_isalpha.c  \
	   ft_isdigit.c  \
	   ft_memset.c   \
	   ft_memcpy.c   \
	   ft_strlcpy.c  \
	   ft_strlcat.c  \
	   ft_toupper.c  \
	   ft_tolower.c  \
	   ft_strchr.c   \
	   ft_strrchr.c  \
	   ft_strncmp.c  \
	   ft_memcmp.c   \
	   ft_memmove.c  \
	   ft_strnstr.c  \
	   ft_atoi.c     \
	   ft_calloc.c   \
	   ft_strdup.c   \
	   ft_memchr.c   \
	   ft_substr.c   \
	   ft_strjoin.c  \
	   ft_strtrim.c  \
	   ft_split.c    \
	   ft_countnumb.c \
	   ft_itoa.c     \
	   ft_strmapi.c  \
	   ft_striteri.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
	   
	   
FLAGS = -Wall -Wextra -Werror -c

OBJS = $(SRCS:.c=.o)

BONUSSRC = ft_lstnew_bonus.c   \
	   ft_lstadd_front_bonus.c \
	   ft_lstsize_bonus.c  \
	   ft_lstlast_bonus.c  \
	   ft_lstadd_back_bonus.c \
	   ft_lstdelone_bonus.c \
	   ft_lstclear_bonus.c \
	   ft_lstiter_bonus.c  \

BONUSOBJ = $(BONUSSRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

bonus: $(BONUSOBJ)

#Toma los archivos objetos del bonus y los añade a la librería estática utilizando ar
$(BONUS_NAME): $(BONUSOBJ)
		ar rcs $(NAME) $(BONUSOBJ)
		ar rcs $(BONUS_NAME) $(BONUSOBJ)


%.o: %.c
	$(CC) $(FLAGS) -o $@ $<

clean:
	$(RM) $(OBJS) $(BONUS_NAME) $(BONUSOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus