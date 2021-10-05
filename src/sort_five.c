#include "../inc/push_swap.h"

void	nbr_four(t_var *var)
{
	bool	i;

	i = false;
	if ((var->lb->be->nb) < (var->la->be->next->nb))
	{
		psh_pa(var);
		if (var->la->be->nb > var->la->be->next->nb)
			swp_sa(var);
	}
	else
	{
		if (var->lb->be->nb < var->la->end->nb)
		{
			rev_rra(var);
			i = true;
		}
		psh_pa(var);
		rot_ra(var);
		if (i)
			rot_ra(var);
	}
}

void	nbr_five_next(t_var *var)
{
	{
		if (var->lb->be->nb < var->la->end->nb)
		{
			rev_rra(var);
			psh_pa(var);
			rot_ra(var);
			rot_ra(var);
		}
		else
		{
			psh_pa(var);
			rot_ra(var);
		}
	}
}

void	nbr_five(t_var *var)
{
	if (var->lb->be->nb < var->la->be->next->nb)
	{
		psh_pa(var);
		if (var->la->be->nb > var->la->be->next->nb)
			swp_sa(var);
	}
	else if (var->lb->be->nb > var->la->end->back->nb)
		nbr_five_next(var);
	else
	{
		rot_ra(var);
		psh_pa(var);
		swp_sa(var);
		rev_rra(var);
	}
}

void	sort_five(t_var *var)
{
	psh_pb(var);
	psh_pb(var);
	sort_three(var);
	nbr_four(var);
	nbr_five(var);
}

void	sort_four(t_var *var)
{
	psh_pb(var);
	sort_three(var);
	nbr_four(var);
}
