/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_graph_node_search_type.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuzureau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 15:02:31 by cuzureau          #+#    #+#             */
/*   Updated: 2019/01/31 10:13:46 by cuzureau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node			*ft_graph_node_search_type(t_graph *g, unsigned char status)
{
	size_t		x;

	x = 0;
	while (x < g->size)
	{
		if (g->n[x] != NULL && g->n[x]->i && g->n[x]->i->status == status)
			return (g->n[x]);
		++x;
	}
	return (NULL);
}
