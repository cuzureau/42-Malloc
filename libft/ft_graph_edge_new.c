/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_graph_edge_new.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuzureau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 15:06:34 by cuzureau          #+#    #+#             */
/*   Updated: 2019/01/31 10:13:22 by cuzureau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_edge			*ft_graph_edge_new(t_node *a, t_node *b)
{
	t_edge		*e;

	if (!(e = (t_edge*)ft_memalloc(sizeof(t_edge))))
		exit(EXIT_FAILURE);
	e->flow = 0;
	e->maxflow = 1;
	e->prev = a;
	e->next = b;
	return (e);
}
