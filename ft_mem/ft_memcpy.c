/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salome <salome@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:00:29 by sad-aude          #+#    #+#             */
/*   Updated: 2021/03/07 14:28:02 by salome           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*str;
	char		*final_dest;

	if (!dest && !src)
		return (0);
	str = (const char*)src;
	final_dest = dest;
	i = 0;
	while (i < n)
	{
		final_dest[i] = str[i];
		i++;
	}
	return (final_dest);
}
