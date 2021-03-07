/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salome <salome@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:57:59 by sad-aude          #+#    #+#             */
/*   Updated: 2021/03/07 14:26:06 by salome           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static	int		checking_number(unsigned long int n)
{
	int res;

	res = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		res++;
	}
	return (res);
}

static	void	putting_char(char **dest, char c, int count)
{
	(*dest)[count - 1] = c;
}

static	char	*ft_putnbr(char *dest, unsigned long int n, int count)
{
	if (n >= 10)
	{
		putting_char(&dest, n % 10 + '0', count);
		ft_putnbr(dest, n / 10, count - 1);
	}
	else
	{
		putting_char(&dest, n % 10 + '0', count);
	}
	return (dest);
}

char			*ft_ultoa(unsigned long int n)
{
	char *dest;

	if (!(dest = malloc(checking_number(n) + 1)))
		return (NULL);
	dest[checking_number(n)] = '\0';
	dest = ft_putnbr(dest, n, checking_number(n));
	return (dest);
}
