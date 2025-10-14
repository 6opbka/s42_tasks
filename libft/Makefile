NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

SRC = ft_tolower\
	ft_isalpha\
	ft_isdigit\
	ft_isalnum\
	ft_isascii\
	ft_isprint\
	ft_strlen\
	ft_memset





SRCS = $(addsuffix .c, $(SRC))
OBJS = $(addsuffix .o, $(SRC))

MAIN = main.c
EXEC = test

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


$(NAME): $(OBJS)
	$(AR) $(NAME) $^

$(EXEC): $(NAME) $(MAIN)
	$(CC) $(CFLAGS) $(MAIN) -L. -lft -o $(EXEC)

all: $(NAME) 

run: $(EXEC)
	./$(EXEC)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(EXEC)

re: fclean all

.PHONY: all clean fclean re run
