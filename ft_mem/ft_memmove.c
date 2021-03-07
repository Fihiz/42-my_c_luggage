/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salome <salome@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:00:38 by sad-aude          #+#    #+#             */
/*   Updated: 2021/03/07 14:28:20 by salome           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*str;
	unsigned char		*final_dest;

	if (!dest && !src)
		return (0);
	str = src;
	final_dest = dest;
	if (str > final_dest)
		return (ft_memcpy(final_dest, str, n));
	else
	{
		while (n--)
			*(final_dest + n) = *(str + n);
	}
	return (final_dest);
}
