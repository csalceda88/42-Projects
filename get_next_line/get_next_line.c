/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalceda <csalceda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 01:00:15 by csalceda          #+#    #+#             */
/*   Updated: 2019/11/18 13:02:23 by csalceda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int				line_reader(char **staticline, char **line, int fd)
{
	char		*c;
	char		*d;
	int			t;

	t = 0;
	while (staticline[fd][t] != '\n' && staticline[fd][t] != '\0')
		t++;
	if (staticline[fd][t] == '\n')
	{
		staticline[fd][t] = '\0';
		c = ft_strdup(staticline[fd]);
		d = staticline[fd];
		staticline[fd] = ft_strdup(&staticline[fd][t + 1]);
		free(d);
		*line = c;
	}
	else if (staticline[fd][t] == '\0')
	{
		*line = ft_strdup(staticline[fd]);
		staticline[fd] = NULL;
	}
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	int			i;
	char		buf[BUFF_SIZE + 1];
	static char	*mem[4500];
	char		a;
	char		*temp;

	if (fd < 0 || fd > 4500 || !line || read(fd, buf, 0) < 0)
		return (-1);
	while ((i = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[i] = '\0';
		(mem[fd] == NULL) ? mem[fd] = ft_strnew(1) : 0;
		temp = ft_strjoin(mem[fd], buf);
		a = buf[0];
		free(mem[fd]);
		mem[fd] = ft_strdup(temp);
		free(temp);
		if (BUFF_SIZE == 1 && a != '\n')
			continue ;
		if (ft_strchr(mem[fd], '\n'))
			break ;
	}
	if (i == 0 && (mem[fd] == NULL || mem[fd][0] == '\0'))
		return (0);
	return (line_reader(mem, line, fd));
}
