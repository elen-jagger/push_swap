# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eleusik <eleusik@student.42warsaw.pl>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/04 12:15:30 by eleusik           #+#    #+#              #
#    Updated: 2024/03/18 11:53:25 by eleusik          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Library		= libft

SRC			= ft_isalpha \
			 ft_isdigit \
			 ft_isalnum \
			 ft_isascii \
			 ft_isprint \
			 ft_strlen \
			 ft_atoi \
			 ft_tolower \
			 ft_toupper \
			 ft_strlcpy \
			 ft_strncmp \
			 ft_strlcat \
			 ft_strchr \
			 ft_strrchr \
			 ft_strnstr \
			 ft_memset \
			 ft_bzero \
			 ft_memchr \
			 ft_memmove \
			 ft_memcpy \
			 ft_memcmp \
			 ft_calloc \
			 ft_strdup \
			 ft_putchar_fd \
			 ft_putstr_fd \
			 ft_putendl_fd \
			 ft_putnbr_fd \
			 ft_strtrim \
			 ft_strjoin \
			 ft_substr \
			 ft_striteri \
			 ft_strmapi \
			 ft_split \
			 ft_itoa \

COMPILER	= cc

FLAGS	= -Wall -Wextra -Werror

CFILES	= $(SRC:%=%.c)

OFILES	= $(SRC:%=%.o)

OUTN	= $(Library).a

NAME	= $(OUTN)

all: $(NAME)

$(NAME): $(OFILES)
	$(COMPILER) $(FLAGS) -c $(CFILES) -I./
	ar -rcs $(OUTN) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re


so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(CFILES)
	cc -nostartfiles -shared -o libft.so $(OFILES)
