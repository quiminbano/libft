/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:33:38 by corellan          #+#    #+#             */
/*   Updated: 2023/10/22 09:13:38 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	if (lst == (void *)0)
		return ((void *)0);
	while (temp->next != (void *)0)
		temp = temp->next;
	return (temp);
}
