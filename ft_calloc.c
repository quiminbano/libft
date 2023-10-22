/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:40:46 by corellan          #+#    #+#             */
/*   Updated: 2023/10/22 09:12:36 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*s;

	if ((nitems > 0) && (size > 0))
	{
		if ((((nitems * size) % size) != 0) || \
			(((nitems * size) % nitems) != 0))
			return (NULL);
	}
	s = (void *)malloc(size * nitems);
	if (s == 0)
		return ((void *)0);
	ft_bzero(s, (nitems * size));
	return (s);
}
