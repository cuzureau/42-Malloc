/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_clean.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuzureau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 15:15:51 by cuzureau          #+#    #+#             */
/*   Updated: 2019/01/31 10:12:59 by cuzureau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_exit_clean(void)
{
	write(1, "ERROR\n", 6);
	exit(EXIT_FAILURE);
}
