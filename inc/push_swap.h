#ifndef PUSH_SWAP_H
#	define PUSH_SWAP_H

#	include "libft.h"

typedef struct s_stack
{
	long long				val;
	long long				target;
	long long				max;
	long long				min;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

typedef struct s_moves
{
	long long		id;
	int					moves;
}	t_moves;

typedef enum e_out
{
	OK = 0,
	EMPTY_INPUT,
	INPUT_ERROR,
	REPEATED_NUMBER,
	MALLOC_ERROR,
	BAD_INDEX
} t_out;

// algorithm
void			sorting_checks(t_stack **sta, t_stack **stb);
void			push_swap(t_stack **sta, t_stack **stb);
t_moves		*calculate_moves(t_stack *sta, t_stack *stb);
int				move(t_stack **src, t_stack **dest);
void			find_target_a_to_b(t_stack *src, t_stack *targeted);
void			sort_three(t_stack **sta);
// -> check_sorted
t_bool		sorted_sta(t_stack *sta);
t_bool		sorted_stb(t_stack *stb);
// -> utils
void			set_max_min(t_stack **st);

// input parse
long long	get_number(char *argv, int *counter);
t_stack		*get_stack(int argc, char **argv);
void			ft_no_repeat(t_stack **sta);

// stack utils
void			print_stack(t_stack *stack);
void			add_to_stack(t_stack **stack, int val);
void			free_stack(t_stack **stack);
t_stack		*get_last(t_stack *stack);
int				stk_len(t_stack *st);
// main.c

// operations
// -> Push
void			push(t_stack **src, t_stack **dst);
void			pa(t_stack **stack_b, t_stack **stack_a);
void			pb(t_stack **stack_a, t_stack **stack_b);
// -> Rev_Rotate
void			rev_rotate(t_stack **stack);
void			rra(t_stack **stack_a);
void			rrb(t_stack **stack_b);
void			rrr(t_stack **stack_a, t_stack **stack_b);
// -> Rotate
void			rotate(t_stack **stack);
void			ra(t_stack **stack_a);
void			rb(t_stack **stack_b);
void			rr(t_stack **stack_a, t_stack **stack_b);
// -> Swap
void			swap(t_stack **stack);
void			sa(t_stack **stack_a);
void			sb(t_stack **stack_b);
void			ss(t_stack **stack_a, t_stack **stack_b);

// error handle
void			check_arg(int argc, char **argv);
void			check_input(int argc, char **argv);
void			exit_malloc_error(void);

#endif