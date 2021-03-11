/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_ft_strdel.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salome <salome@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 11:14:51 by sad-aude          #+#    #+#             */
/*   Updated: 2021/03/11 13:08:29 by salome           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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