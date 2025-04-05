PROG		=	Push_Swap

CC			=	cc
C_FLAGS	=	-Wall -Wextra -Werror -g

SRC			=	src/error_management.c src/main.c src/input_parse.c src/stack_utils.c	\
					src/op/push.c src/op/swap.c src/op/rotate.c src/op/rev_rotate.c src/algorithm/algorithm.c \
					src/algorithm/check_sort.c src/algorithm/utils.c src/algorithm/move.c src/algorithm/costs.c \
					src/algorithm/push_back.c
OBJ			=	$(SRC:.c=.o)

HEADER	=	-Iinc

%.o : %.c
	@$(CC) ${C_FLAGS} ${HEADER} -c $< -o $@

all: ${PROG}

${PROG}: ${OBJ}
	@echo "\033[35mLIB COMPILED SUCCESSFULLY!!!!"
	@make re -C lib
	@$(CC) -g ${OBJ} -Llib -lft -o ${PROG}
	@echo "\033[33mCompiling Push_Swap cause'\nSwap_Push is not that natural"

clean:
	@make fclean -C lib
	@rm -rf ${OBJ}

fclean: clean
	@rm -rf $(PROG)
	@echo "\n033[31mDeleting EVERITHING!!!! ⌐(ಠ۾ಠ)¬\n"

re: fclean all