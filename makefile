NAME = libasm.a
SRC = ft_read.s \
		ft_write.s \
		ft_strdup.s \
		ft_strcmp.s \
		ft_strcpy.s \
		ft_strlen.s

OBJ = $(SRC:.s=.o)

CC = nasm
FLAGS = -f macho64

TCC = gcc
TFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)

%.o: %.s  
	$(CC) $(FLAGS) $<

clean:
	rm -f $(OBJ) 

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(NAME)
	$(TCC) $(TFLAGS) main.c libasm.h -L. -lasm
