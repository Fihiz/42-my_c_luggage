/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salome <salome@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 23:19:16 by sad-aude          #+#    #+#             */
/*   Updated: 2021/03/11 13:09:17 by salome           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static	int		words_counter(char const *s, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[0] != sep && i == 0)
			count++;
		if (s[i] != sep && i > 0 && s[i - 1] == sep)
			count++;
		i++;
	}
	return (count);
}

static	char	*word_mallocator(char const *s, char sep)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != sep)
		i++;
	if (!(word = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (s[i] && s[i] != sep)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static	char	**ft_free(char **dest)
{
	int	i;

	i = 0;
	while (dest[i++])
		free(dest[i]);
	free(dest);
	return (0);
}

char			**ft_split(char const *s, char c)
{
	char	**dest;
	int		i;
	int		ind;

	i = 0;
	ind = 0;
	if (!s || (!(dest = malloc(sizeof(char *) * (words_counter(s, c) + 1)))))
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			if (!(dest[ind] = word_mallocator(s + i, c)))
				return (ft_free(dest));
			++ind;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	dest[ind] = 0;
	return (dest);
}
