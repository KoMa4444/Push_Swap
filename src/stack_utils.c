#include "../inc/push_swap.h"

void	print_stack(stack_t *stack)
{
	stack_t *tmp;

	if (!stack)
		return ;
	tmp = stack;
	while (tmp->val != 0)
	{
		ft_printf("%i\n", tmp->val);
		tmp = tmp->next;
	}
}

void	add_to_stack(stack_t **stack, int val)
{
	stack_t	*tmp;

	if (!stack)
		return ;
	tmp = *stack;
	while (tmp->val != 0)
		tmp = tmp->next;
	tmp->val = val;
	tmp->next = (stack_t *)ft_calloc(1, sizeof(stack_t));
	tmp->next->val = 0;
	tmp->next->prev = tmp;
}

void	free_stack(stack_t **stack)
{
	stack_t *tmp;
	tmp = *stack;

	while (tmp->val != 0)
	{
		tmp = tmp->next;
		free(tmp->prev);
	}
	free(tmp);
}

stack_t	*get_last(stack_t *stack)
{
	stack_t	*tmp;

	tmp = stack;
	while (tmp->next->val != 0)
		tmp = tmp->next;
	return (tmp);
}
