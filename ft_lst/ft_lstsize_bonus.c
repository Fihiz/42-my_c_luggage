/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salome <salome@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:59:41 by sad-aude          #+#    #+#             */
/*   Updated: 2021/03/06 22:55:53 by salome           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_lstsize(t_list *lst)
{
	int len;

	len = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}
