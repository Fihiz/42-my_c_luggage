/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salome <salome@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:02:38 by sad-aude          #+#    #+#             */
/*   Updated: 2021/03/11 13:08:08 by salome           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = -1;
	if (src == 0)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	while (src[++i] && (i + 1) < size)
		dst[i] = src[i];
	dst[i] = '\0';
	return (ft_strlen(src));
}
