/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:50:42 by corellan          #+#    #+#             */
/*   Updated: 2023/10/22 09:12:50 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if ((*lst != (void *)0))
	{
		while (temp->next != (void *)0)
			temp = temp->next;
		temp->next = new;
	}
	else
		(*lst) = new;
}
