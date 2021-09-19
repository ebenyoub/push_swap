# include "../inc/push_swap.h"

void	sort_five(t_var *var)
{
	psh_pb(var);
	psh_pb(var);
	sort_three(var);
	if (var->lst_b->begin->content > var->lst_a->begin->content
		&& var->lst_b->begin->content < var->lst_a->end->content)
	{
		rev_rra(var);
		psh_pa(var);
		rot_ra(var);
		rot_ra(var);
	}
	if (var->lst_b->begin->content > var->lst_a->begin->content
		&& var->lst_b->begin->content < var->lst_a->end->content)
	{
		psh_pa(var);
		swp_sa(var);
	}
}