# include "../inc/push_swap.h"

void	nbr_four(t_var *var)
{
	if (is_sorted_lst(A->be))
		return ;
	if (B->be->nb < A->be->next->nb)
	{
		psh_pa(var);
		A->be->nb > A->be->next->nb ? swp_sa(var) : 0;
	}
	else
	{
		if (B->be->nb < A->end->nb)
		{
			rev_rra(var);
			F = true;
		}
		psh_pa(var);
		rot_ra(var);
		F ? rot_ra(var) : 0;
		F = false;
	}
}

void	nbr_five(t_var *var)
{
	psh_pa(var);
	
	A->be->nb > A->be->next->nb ?
		swp_sa(var) : 0;
}

void	sort_five(t_var *var)
{
	psh_pb(var);
	psh_pb(var);
	sort_three(var);
	nbr_four(var);
	nbr_five(var);
}