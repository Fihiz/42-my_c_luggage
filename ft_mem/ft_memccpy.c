/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salome <salome@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:59:53 by sad-aude          #+#    #+#             */
/*   Updated: 2021/03/07 14:27:26 by salome           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		*final_dest;
	size_t				i;

	i = 0;
	str = (unsigned char *)src;
	final_dest = dest;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			final_dest[i] = str[i];
			return (&final_dest[i + 1]);
		}
		else
			final_dest[i] = str[i];
		i++;
	}
	return (NULL);
}
