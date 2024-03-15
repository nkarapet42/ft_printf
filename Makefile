NAME = libftprintf.a

CC = cc

INC = Includes/ft_printf.h Includes/libft.h

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf/ft_check.c ft_printf/ft_printc.c ft_printf/ft_printdi.c ft_printf/ft_printf.c ft_printf/ft_printhex.c \
	   ft_printf/ft_printp.c ft_printf/ft_prints.c ft_printf/ft_printu.c

SRCS_LIB = libft/ft_strchr.c libft/ft_putchar_fd.c libft/ft_putstr_fd.c libft/ft_putnbr_fd.c \
		   libft/ft_strlen.c libft/ft_bzero.c libft/ft_memset.c

OBJS_LIB = $(SRCS_LIB:.c=.o)

OBJS = $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS) $(OBJS_LIB)
	ar rcs $(NAME) $(OBJS) $(OBJS_LIB)

%.o: %.c Makefile $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	rm -f $(OBJS_LIB)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
