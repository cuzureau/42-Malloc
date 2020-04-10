/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_graph_node_new.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuzureau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 15:02:52 by cuzureau          #+#    #+#             */
/*   Updated: 2019/01/31 10:13:36 by cuzureau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node			*ft_graph_node_new(t_info *i, size_t size)
{
	t_node		*n;

	if (!(n = (t_node*)ft_memalloc(sizeof(t_node))))
		exit(EXIT_FAILURE);
	n->size = size;
	n->i = i;
	n->ant_id = -1;
	if (!(n->e = ft_memalloc(sizeof(t_edge*))))
		exit(EXIT_FAILURE);
	n->edges_number = 0;
	return (n);
}
