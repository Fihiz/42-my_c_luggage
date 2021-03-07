/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salome <salome@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 18:58:58 by user42            #+#    #+#             */
/*   Updated: 2021/03/07 14:28:59 by salome           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int				cut_line(char **rest, int back_n, char **line)
{
	char *temp;

	if (back_n < 0)
	{
		*line = ft_strdup(*rest);
		free(*rest);
		*rest = NULL;
		return (0);
	}
	*line = ft_substr(*rest, 0, back_n, 0);
	temp = ft_substr(*rest, back_n + 1, ft_strlen(*rest + back_n + 1), 0);
	free(*rest);
	*rest = temp;
	return (1);
}

int				get_next_line(int fd, char **line)
{
	char		buffer[BUFFER_SIZE + 1];
	static char *rest[10240];
	int			ret;
	int			back_n;

	if (fd < 0 || BUFFER_SIZE < 1 || !line || read(fd, buffer, 0) < 0 ||
			(!rest[fd] && !(rest[fd] = ft_stringnew(0))))
		return (-1);
	while ((back_n = ft_strichr(rest[fd], '\n')) < 0 &&
			(ret = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[ret] = '\0';
		rest[fd] = ft_strjoin(rest[fd], buffer, 1);
	}
	return (cut_line(&rest[fd], back_n, line));
}
