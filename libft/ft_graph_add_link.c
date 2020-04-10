/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_graph_add_link.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuzureau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 15:03:26 by cuzureau          #+#    #+#             */
/*   Updated: 2019/01/31 10:13:05 by cuzureau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		graph_add_link(t_node *n, t_node *t)
{
	t_edge	**tmp;
	size_t	x;

	x = 0;
	tmp = n->e;
	if (!(n->e = (t_edge**)ft_memalloc((n->edges_number + 1) *
			sizeof(t_edge*))))
		exit(EXIT_FAILURE);
	while (x < n->edges_number)
	{
		n->e[x] = tmp[x];
		++x;
	}
	ft_memdel((void*)&tmp);
	if (!(n->e[n->edges_number] = ft_graph_edge_new(n, t)))
		exit(EXIT_FAILURE);
}

int				ft_graph_add_link(t_node *a, t_node *b)
{
	if (a == NULL || b == NULL)
		return (0);
	graph_add_link(a, b);
	graph_add_link(b, a);
	++a->edges_number;
	++b->edges_number;
	return (1);
}
