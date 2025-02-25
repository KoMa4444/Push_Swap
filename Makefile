PROG	=	Push_Swap

CC=cc

C_FLAGS= -Wall -Wextra -Werror -g

SRC		=	src/algorithm.c src/error_handle.c src/operations.c \
				src/push_swap.c src/utils.c



all:
	@echo "\033[33mCompiling Lib.............."
	@make -C ./lib
	@echo "\033[33m..........................."
	@printf "\033c"
	@echo "\033[35mLIB COMPILED SUCCESSFULLY!!!!"
	@echo "\033[33mCompiling Push_Swap cause'\nSwap_Push is not that natural"
	@$(CC) $(C_FLAGS) $(SRC) lib/inc_lib.a -o $(PROG)

re: fclean all

clean:
	@make fclean -C lib

fclean: clean
	@rm -rf $(PROG)