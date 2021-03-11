/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salome <salome@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:03:11 by sad-aude          #+#    #+#             */
/*   Updated: 2021/03/11 13:10:40 by salome           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t ind;

	i = 0;
	if (!*needle)
		return ((char*)haystack);
	if (len == 0)
		return (NULL);
	while (haystack[i] && i < len)
	{
		ind = 0;
		while (needle[ind] && haystack[i + ind] == needle[ind] && i + ind < len)
			ind++;
		if (needle[ind] == '\0')
			return ((char*)haystack + (i));
		i++;
	}
	return (NULL);
}
