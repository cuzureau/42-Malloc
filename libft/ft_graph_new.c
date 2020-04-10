/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_graph_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuzureau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 15:03:07 by cuzureau          #+#    #+#             */
/*   Updated: 2019/01/31 10:13:28 by cuzureau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_graph			*ft_graph_new(void)
{
	t_graph		*g;

	if (!(g = (t_graph*)ft_memalloc(sizeof(t_graph) + 1)))
		exit(EXIT_FAILURE);
	g->size = 0;
	if (!(g->n = (t_node**)ft_memalloc(sizeof(t_node*))))
		exit(EXIT_FAILURE);
	return (g);
}
