NAME = libft.a
CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = $(wildcard *.c)


OBJS = ${SRC:.c=.o}

all: $(NAME)

%.o: %.c libft.h
		${CC} -c ${CFLAGS} -o $@ $<
            
$(NAME): ${OBJS}
		@ar -rc ${NAME} ${OBJS}
        
            
.PHONY: all clean fclean bonus

clean:
	@rm -f ${OBJS} ${OBJS2}

fclean: clean
	@rm -f ${NAME}

re: fclean all
