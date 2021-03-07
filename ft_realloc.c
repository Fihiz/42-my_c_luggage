/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salome <salome@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 22:48:10 by salome            #+#    #+#             */
/*   Updated: 2021/03/06 22:48:30 by salome           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t new_size, size_t old_size)
{
	char	*newptr;

	if (!(newptr = ft_calloc(new_size, sizeof(unsigned char))))
		return (NULL);
	if (ptr)
	{
		if (old_size > new_size)
			old_size = new_size;
		ft_memcpy(newptr, ptr, old_size);
		free(ptr);
		ptr = NULL;
	}
	return (newptr);
}