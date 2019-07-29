/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashypilo <ashypilo@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 14:24:08 by ashypilo          #+#    #+#             */
/*   Updated: 2018/11/13 20:13:24 by ashypilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s1, size_t n)
{
	size_t		i;
	char		*d1;

	d1 = (char *)s1;
	i = 0;
	while (i < n)
	{
		d1[i] = '\0';
		i++;
	}
	return (d1);
}
