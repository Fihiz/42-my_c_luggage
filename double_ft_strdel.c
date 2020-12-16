/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_ft_strdel.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 11:14:51 by sad-aude          #+#    #+#             */
/*   Updated: 2020/12/16 19:12:50 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	double_ft_strdel(char **dest)
{
    int i;

    i = 0;
    while (dest[i])
    {
        ft_strdel(&dest[i]);
        i++;
    }
    free(dest);
    dest = NULL;
}