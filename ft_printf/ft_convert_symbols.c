/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_symbols.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salome <salome@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:35:55 by sad-aude          #+#    #+#             */
/*   Updated: 2021/03/06 23:03:41 by salome           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convert_percent(t_spec *spec)
{
	if (spec->width)
	{
		if (spec->width < 0)
		{
			spec->is_minus = 1;
			spec->width *= -1;
		}
		if (spec->is_minus)
			spec->count += write(1, "%", 1);
		if (spec->is_zero && !spec->is_minus)
			while (spec->diff++ < spec->width - 1)
				spec->count += write(1, "0", 1);
		else
			while (++spec->diff < spec->width)
				spec->count += write(1, " ", 1);
		if (!spec->is_minus)
		{
			while (++spec->diff < spec->width)
				spec->count += write(1, " ", 1);
			spec->count += write(1, "%", 1);
		}
	}
	else
		spec->count += write(1, "%", 1);
}
