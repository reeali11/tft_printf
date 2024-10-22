NAME = libftprintf.a

SRCS = ft_putchar.c		\
		ft_putnbr.c		\
		ft_putstr.c		\
		ft_hexa.c		\
		ft_putunsnbr.c	\
		ft_pointer.c	\
		ft_printf.c


		
OBJS = $(SRCS:.c=.o)

CC = cc 

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

clean: 
	rm -f $(OBJS)

fclean: clean 
	rm -f $(NAME)

re: fclean all