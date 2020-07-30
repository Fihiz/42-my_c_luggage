/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:03:59 by sad-aude          #+#    #+#             */
/*   Updated: 2020/05/29 01:29:47 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char *s, unsigned int start, size_t len, int id)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (s == 0 || !(sub = malloc(sizeof(char) * (len + 1))))
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
