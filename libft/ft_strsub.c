/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuzureau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 14:51:52 by cuzureau          #+#    #+#             */
/*   Updated: 2019/01/31 10:18:52 by cuzureau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*dst;

	if (!s || !(dst = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	ft_strncpy(dst, &s[start], len);
	dst[len] = '\0';
	return (dst);
}
