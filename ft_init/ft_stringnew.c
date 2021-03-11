/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stringnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salome <salome@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:01:28 by sad-aude          #+#    #+#             */
/*   Updated: 2021/03/11 13:08:55 by salome           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_stringnew(int size)
{
	char	*tab;
	int		index;

	if (!(tab = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	index = 0;
	while (index <= size)
		tab[index++] = '\0';
	return (tab);
}
