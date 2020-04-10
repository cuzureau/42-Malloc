/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuzureau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 13:25:43 by cuzureau          #+#    #+#             */
/*   Updated: 2019/01/31 10:18:48 by cuzureau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little[i])
		return ((char *)&big[i]);
	while (big[i])
	{
		while (big[i + j] == little[j])
		{
			j++;
			if (j == ft_strlen(little))
				return ((char *)&big[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
