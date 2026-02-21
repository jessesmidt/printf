# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jsmidt <jsmidt@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2025/10/24 15:20:46 by jsmidt        #+#    #+#                  #
#    Updated: 2025/11/05 14:12:09 by jsmidt        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
CC			= cc
CFLAGS		= -Wall -Werror -Wextra -ILibft
LIBFT_DIR	= libft
LIBFT		= $(LIBFT_DIR)/libft.a

SRC			= ft_printf.c \
			printfutil.c \
			printptr.c \
			printhex.c \
			printu.c

OBJ			= $(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(LIBFT) $(OBJ)
			make -C $(LIBFT_DIR)
			cp $(LIBFT) $(NAME)
			ar rcs $(NAME) $(OBJ)

$(LIBFT):
			 -C $(LIBFT_DIR)
	
clean:
			rm -f $(OBJ) 
			$(MAKE) -C $(LIBFT_DIR) clean

fclean:		clean
			rm -f $(NAME)
			$(MAKE) -C $(LIBFT_DIR) fclean

re:			fclean all

.PHONY:		all clean fclean re
