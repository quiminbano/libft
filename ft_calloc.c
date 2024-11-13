/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:40:46 by corellan          #+#    #+#             */
/*   Updated: 2024/11/12 20:14:20 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*s;
	size_t	result;

	result = size * nitems;
	if (size > 0 && nitems != result / size)
		return (NULL);
	s = (void *)malloc(result);
	if (s == NULL)
		return (NULL);
	ft_bzero(s, result);
	return (s);
}
