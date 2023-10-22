/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:58:02 by corellan          #+#    #+#             */
/*   Updated: 2023/10/22 09:12:58 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst != (void *)0)
	{
		temp = lst->next;
		(*del)(lst->content);
		free(lst);
		lst = temp;
	}
	else
		temp = lst;
}
