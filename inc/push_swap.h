/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 00:05:00 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/04 17:16:49 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <stdbool.h>

/*
** raccourcis pour allèger le code
*/

# define A	var->la
# define B	var->lb
# define F	var->flag
# define M	var->median
# define P	var->part
# define C	var->chunk_len
# define K	var->chunk_tabs
# define H	var->last_chunk_flag
# define S	var->size
# define T	var->tab
# define I	var->index
# define Q	var->alt
# define L	Q ? B->length : A->length
# define N	var->nb

typedef struct  s_node
{
	int				nb;
	struct s_node	*back;
	struct s_node	*next;
}               t_node;

typedef struct	s_list
{
	int				length;	
	struct s_node	*be;
	struct s_node	*end;
}				t_list;

typedef struct	s_var
{
	int				*tab;
	int				*index;
	int				tap;
	int				size;
	int				median;
	int				chunk_len;
	int				part;
	int				nb;
	int				last_chunk_size;
	bool			last_chunk_flag;
	int				**chunk_tabs;
	bool			flag;
	bool			alt;
	struct s_list	*la;
	struct s_list	*lb;
}				t_var;

/*
******* LIBFT *******
*/

void    ft_putchar(char c);
void    ft_putstr(char *str);
void	ft_putnbr(int n);
int		ft_isdigit(int c);
void	ft_free_tab(char ***tab);
int		ft_atoi(const char *str, t_var *var);
int     ft_strlen(char *str);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(char *s1);
char	**ft_split(char const *s, char c);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);

/*
****** PUSH_SWAP ******
*/

void    m_exit(int err, t_var *var);
void    param_init(int argc, char **argv, t_var *var);
void    sort_two(t_var *var);
void    sort_three(t_var *var);
void	sort_four(t_var *var);
void	sort_five(t_var *var);
void	sort_index(t_var *var);
void    sort_small(t_var *var);
void	sort_push(int n, t_var *var);
void    sort_final(t_var *var);
int		find_nb(int c, t_var *var);
void	create_chunks(t_var *var);
void    sort_big(t_var *var);

void    free_tab(int **tab, t_var *var);
void	free_list(t_var *var);
void    push_free(t_var *var);

void    swp_sa(t_var *var);
void    swp_sb(t_var *var);
void    swp_ss(t_var *var);
void    psh_pa(t_var *var);
void    psh_pb(t_var *var);
void    rot_ra(t_var *var);
void    rot_rb(t_var *var);
void    rot_rr(t_var *var);
void    rev_rra(t_var *var);
void    rev_rrb(t_var *var);
void    rev_rrr(t_var *var);

/*
********* LIST *********
*/

t_node  *new_element(int nb, t_var *var);
t_list	*new_list(t_var *var);
t_list	*make_list(t_var *var);
void	lstpop_front(char c, t_var *var);
void	lstpop_back(char c, t_var *var);
void    lstadd_front(char c, t_var *var, t_node *new);
void    lstadd_back(t_var *var, t_list *lst, int nb);
void    print_lst(t_node *lst);
bool	is_sorted_lst(t_node *lst);

# endif