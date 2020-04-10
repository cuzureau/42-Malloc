# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cuzureau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/09 16:28:11 by cuzureau          #+#    #+#              #
#    Updated: 2019/01/31 10:56:34 by cuzureau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
TEST	= ko

ifeq ($(TEST),ko)
CFLAGS+=	-Wall -Wextra -Werror
else
CFLAGS+=	-g3 -fsanitize=address \
 			-fno-omit-frame-pointer \
			-fsanitize-address-use-after-scope
endif

NOC=\033[0m
OKC=\033[32m
ERC=\033[31m
WAC=\033[33m

NAME	=	libft.a
INC_NAME=	libft.h
OBJ_NAME=	$(SRC_NAME:.c=.o)
SRC_NAME=	ft_abs.c ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c \
			ft_isascii.c ft_isdigit.c ft_islower.c ft_isprint.c ft_isupper.c \
			ft_itoa.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
			ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_nummalloc.c \
			ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c \
			ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_strcat.c \
			ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c \
			ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c \
			ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c \
			ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c \
			ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c \
			ft_strtrim.c ft_swap.c ft_tolower.c ft_toupper.c \
			ft_strjoinfree.c ft_strndup.c ft_lstadd.c ft_lstiter.c ft_lstmap.c \
			ft_lstnew.c ft_lstdelone.c ft_lstdel.c \
			ft_graph_add_link.c ft_graph_add_node.c ft_graph_new.c \
			ft_graph_node_new.c ft_graph_node_search.c \
			ft_graph_node_search_type.c ft_graph_edge_new.c ft_exit_clean.c \
			ft_strlenuntilc.c

all: $(NAME)

$(NAME): $(OBJ_NAME) $(INC_NAME)
	@echo "$(WAC)libft$(NOC)	+ obj	$(OKC)[OK]$(NOC)"
	@ar rc $(NAME) $(OBJ_NAME)
	@ranlib $(NAME)
	@echo "$(WAC)libft$(NOC)	+ lib	$(OKC)[OK]$(NOC)"

$(OBJ_NAME): $(SRC_NAME)
	@$(CC) $(CFLAGS) -c $(SRC_NAME) -I $(INC_NAME)

clean:
	@rm -rf $(OBJ_NAME)
	@echo "$(WAC)libft$(NOC)	- obj	$(OKC)[OK]$(NOC)"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(WAC)libft$(NOC)	- lib	$(OKC)[OK]$(NOC)"

re: fclean all

norme:
	@norminette $(SRC_NAME) $(INC_NAME)

.PHONY: all clean fclean re norme
