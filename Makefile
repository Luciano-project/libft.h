# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luccarva <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 22:26:32 by luccarva          #+#    #+#              #
#    Updated: 2023/04/30 15:11:08 by luccarva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a
		
SRCS =  ft_strtrim.c     ft_atoi.c         ft_isprint.c    ft_strlen.c\
		ft_strchr.c      ft_strrchr.c      ft_strncmp.c    ft_strnstr.c\
		ft_isalpha.c     ft_isdigit.c      ft_isalnum.c    ft_isascii.c\
		ft_strlcpy.c     ft_strlcat.c      ft_toupper.c    ft_tolower.c\
		ft_bzero.c       ft_memcpy.c       ft_memmove.c\
		ft_putendl_fd.c  ft_putnbr_fd.c    ft_putchar_fd.c ft_putstr_fd.c\
		ft_itoa.c        ft_split.c        ft_strjoin.c     ft_substr.c\
		ft_strmapi.c     ft_striteri.c     ft_calloc.c      ft_strdup.c\
		ft_memchr.c      ft_memcmp.c       ft_memset.c\

BONUS_SRCS = 	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c\
		ft_lstdelone.c   ft_lstiter.c 	    ft_lstlast.c ft_lstmap.c\
		ft_lstnew.c      ft_lstsize.c		

OBJS	:= ${SRCS:.c=.o}
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

CC		:= gcc
RM		:= /bin/rm -f
CFLAGS	:= -Wall -Wextra -Werror -I*.h

CL := ar -rc
RL := ar -s

${NAME}: ${OBJS}
	${CL} ${NAME} ${OBJS}
	${RL} ${NAME}
	echo 'libft is ready'

all: ${NAME}

bonus: $(OBJS) $(BONUS_OBJS)
	ar rc $(NAME) $(BONUS_OBJS) $(OBJS)

clean:
	${RM} ${OBJS}
	echo 'Objects removed'

fclean: clean
	${RM} ${NAME}
	echo 'Static library removed'

re: fclean all

norm:
	echo 'Running Norminette'
	norminette -R CheckForbiddenSourceHeader *.c
	norminette -R CheckDefine *.h

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS) $(BONUS_SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS) $(BONUS_OBJS)

