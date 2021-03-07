/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salome <salome@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:59:33 by sad-aude          #+#    #+#             */
/*   Updated: 2021/03/06 22:55:49 by salome           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*data;

	if (!(data = malloc(sizeof(t_list))))
		return (NULL);
	if (content)
		data->content = content;
	else
		data->content = NULL;
	data->next = NULL;
	return (data);
}
