# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jelarose <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/04 12:31:59 by jelarose          #+#    #+#              #
#    Updated: 2019/11/11 19:21:16 by jelarose         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=  	ft_atoi.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_isdigit.c \
		ft_isalpha.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strnstr.c \
		ft_strdup.c \
		ft_calloc.c \
		ft_split.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_memset.c

SRCSBONUS	=	ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

OBJS	= $(SRCS:.c=.o)

OBJS_BONUS	= $(SRCSBONUS:.c=.o)

NAME	= libft.a

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

all:		$(NAME) 

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)

bonus:		$(OBJS) $(OBJS_BONUS)
			ar rc $(NAME) $(OBJS_BONUS)

clean:
			rm -f  $(OBJS) $(OBJS_BONUS)

fclean:	clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus
