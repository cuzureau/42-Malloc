/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_graph_node_search.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuzureau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 15:02:42 by cuzureau          #+#    #+#             */
/*   Updated: 2019/01/31 10:13:42 by cuzureau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node			*ft_graph_node_search(t_graph *g, char *name)
{
	size_t		x;

	x = 0;
	while (x < g->size)
	{
		if (g->n[x] != NULL && g->n[x]->i && ft_strequ(g->n[x]->i->name, name))
			return (g->n[x]);
		++x;
	}
	return (NULL);
}
