/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salome <salome@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 16:38:01 by sad-aude          #+#    #+#             */
/*   Updated: 2021/03/07 14:24:43 by salome           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] == '\f' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (nb * sign > 2147483647)
			return (-1);
		if (nb * sign < -2147483648)
			return (0);
		nb = (nb * 10) + (str[i++] - '0');
	}
	return (nb * sign);
}
