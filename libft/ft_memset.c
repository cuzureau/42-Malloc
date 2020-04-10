/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuzureau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 15:32:23 by cuzureau          #+#    #+#             */
/*   Updated: 2019/01/31 10:15:33 by cuzureau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, unsigned char c, size_t len)
{
	unsigned char *str;

	str = (unsigned char*)b;
	while (len)
	{
		(*(str + len - 1)) = c;
		len--;
	}
	return (str);
}
