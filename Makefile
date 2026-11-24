NAME = push_swap

CC = cc

CFLAGS = -Wall -Werror -Wextra

LIBFT = libft/libft.a

SRCS = ft_strcmp.c\
	helpers2.c\
	helpers3.c\
	helpers4.c\
	selection_sort.c\
	operations.c\
	operations_print.c\
	operations_print2.c\
	bench_helpers.c\
	medium.c\
	push_atoi.c\
	ft_printf.c\
	ft_printf_helpers.c\
	complex.c\
	complexhelper.c\
	main.c\

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT) : libft
	$(MAKE) -C libft

%.o : %.c push.h 
	$(CC) $(CFLAGS) -c $< -o $@
clean : 
	rm -f $(OBJS)
	$(MAKE) -C libft clean

fclean :
	rm -f $(NAME)
	rm -f $(OBJS)
	$(MAKE) -C libft fclean
re: fclean all

.PHONY: all clean fclean re libft
