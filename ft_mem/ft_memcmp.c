/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salome <salome@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:00:12 by sad-aude          #+#    #+#             */
/*   Updated: 2021/03/06 22:56:19 by salome           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t i)
{
	size_t ind;

	ind = 0;
	while (i--)
	{
		if (((unsigned char*)s1)[ind] != ((unsigned char*)s2)[ind])
			return (((unsigned char*)s1)[ind] - (((unsigned char*)s2)[ind]));
		ind++;
	}
	return (0);
}
