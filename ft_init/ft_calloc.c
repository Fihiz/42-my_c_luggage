/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salome <salome@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:56:16 by sad-aude          #+#    #+#             */
/*   Updated: 2021/03/11 13:08:47 by salome           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tab;
	size_t	stock;

	stock = count * size;
	if (!(tab = malloc(stock)))
		return (NULL);
	ft_bzero(tab, stock);
	return (tab);
}
