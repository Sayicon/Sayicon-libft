CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = $(filter-out %_bonus.c, $(wildcard *.c))
BONUS_SRCS = $(wildcard *_bonus.c)

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rc $(NAME) $(BONUS_OBJS) $(OBJS)

clean:
	rm -rf $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

test: $(OBJS) $(BONUS_OBJS)
	@gcc $(CFLAGS) $(OBJS) $(BONUS_OBJS) -o program
	@echo Derleme Tamamlandı

testre: fclean test