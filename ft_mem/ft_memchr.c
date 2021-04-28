/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salome <salome@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:00:03 by sad-aude          #+#    #+#             */
/*   Updated: 2021/04/28 20:55:55 by salome           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (&((unsigned char*)s)[i]);
		i++;
	}
	return (NULL);
}

//void	*ft_memchr(const void *s, int c, size_t n)
//{
//	size_t		i;

//	i = 0;
//	while (i < n)
//	{
//		if (((unsigned char *)s)[i] == (unsigned char)c)
//			return (&((unsigned char*)s)[i]);
//		i++;
//	}
//	return (NULL);
//}