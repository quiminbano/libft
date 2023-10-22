/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:54:26 by corellan          #+#    #+#             */
/*   Updated: 2023/10/22 09:13:56 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*tempdest;
	unsigned const char	*tempsrc;

	i = 0;
	tempdest = (unsigned char *)dest;
	tempsrc = (unsigned const char *)src;
	if (tempdest == 0 && tempsrc == 0)
		return ((void *)0);
	while (i < n)
	{
		tempdest[i] = tempsrc[i];
		i++;
	}
	return (dest);
}
