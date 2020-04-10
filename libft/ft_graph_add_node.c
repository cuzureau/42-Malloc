/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_graph_add_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuzureau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 15:03:18 by cuzureau          #+#    #+#             */
/*   Updated: 2019/01/31 10:13:13 by cuzureau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_graph_add_node(t_graph *g, t_node *n)
{
	size_t		i;
	t_node		**tmp;

	i = 0;
	tmp = g->n;
	if (n == NULL)
		exit(EXIT_FAILURE);
	if (!(g->n = (t_node**)ft_memalloc((g->size + 1) * sizeof(t_node*) + 1)))
		exit(EXIT_FAILURE);
	while (i < g->size)
	{
		g->n[i] = tmp[i];
		if (ft_strcmp(tmp[i]->i->name, n->i->name) == 0)
			ft_exit_clean();
		++i;
	}
	ft_memdel((void*)&tmp);
	g->n[g->size] = n;
	g->size++;
	return (1);
}
