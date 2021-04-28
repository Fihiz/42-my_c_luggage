/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salome <salome@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:03:59 by sad-aude          #+#    #+#             */
/*   Updated: 2021/04/28 22:48:24 by salome           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char *s, unsigned int start, size_t len, int id)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!s || !(sub = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	while (s[start] && len--)
		sub[i++] = s[start++];
	sub[i] = '\0';
	if (id == 1 && s)
	{
		free(s);
		s = NULL;
	}
	return (sub);
}
