# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 15:27:12 by baalbade          #+#    #+#              #
#    Updated: 2022/08/15 17:54:12 by baalbade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
IFLAGS		=	-I$(INC_PATH)

AR			=	ar
ARFLAGS		=	rc

RM			=	rm -rf

INC_PATH	=	.
INC_NAME	=	libft.h


SRC_PATH	=	.
SRC_NAME	=	ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strnstr.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_malloc.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_split.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_puchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \

SRC_NAME_BONUS	= ft_lstnew.c \
				  ft_lstadd_front.c \
				  ft_lstsize.c \
				  ft_lstlast.c \
				  ft_lstadd_back.c \
				  ft_lstdelone.c \
				  ft_lstclear.c \
				  ft_lstiter.c \
				  ft_lstmap.c \


.c.o:
				${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
				${AR} ${ARFLAGS} ${NAME} ${OBJS}
				ranlib ${NAME}


