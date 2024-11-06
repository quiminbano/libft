/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:28:40 by corellan          #+#    #+#             */
/*   Updated: 2024/11/06 22:29:13 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*skip_whitespaces(const char *str)
{
	char	*iterable;

	iterable = (char *)str;
	while (ft_isspace(*iterable))
		iterable++;
	return (iterable);
}

int	ft_atoi(char const *str)
{
	char	*iterable;
	long	sign;
	long	result;

	sign = 1;
	result = 0;
	iterable = skip_whitespaces(str);
	if (*iterable == '+')
		iterable++;
	else if (*iterable == '-')
	{
		sign *= -1;
		iterable++;
	}
	while (ft_isdigit(*iterable))
	{
		result = result * 10 + (*iterable - '0');
		if (result < 0 && sign == -1)
			return ((int)LONG_MIN);
		else if (result < 0)
			return ((int)LONG_MAX);
		iterable++;
	}
	return ((int)(result * sign));
}
