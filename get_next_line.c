/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 01:21:20 by aabashee          #+#    #+#             */
/*   Updated: 2023/12/10 20:13:16 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char *remainder;
	char *buffer;
	char *line;
	char *linetemp;
	ssize_t read_bytes;
	char *newline_pos;
	int i;

	if (!remainder)
		line = ft_strdup("");
	else
		line = ft_strdup(remainder);
	if (line == NULL)
		return (NULL);
	while (1)
	{
		buffer = (char *)malloc(BUFFER_SIZE + 1);
		if (buffer == NULL)
		{
			free(line);
			return (NULL);
		}
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes < 0)
		{
			free(line);
			free(buffer);
			return (NULL);
		}
		buffer[read_bytes] = '\0';
		linetemp = line;
		line = ft_strjoin(linetemp, buffer);
		free(linetemp);
		free(buffer);
		newline_pos = ft_strchr(line, '\n');
		// printf("line ??? :%s\n", newline_pos);
		// printf("%s\n",line);
		if (newline_pos != NULL)
		{
			i = 0;
			while (line[i] != '\n')
				i++;
			linetemp = malloc(i + 2);
			i = 0;
			while (line[i] != '\n')
			{
				linetemp[i] = line[i];
				i++;
			}
			if (line[i] == '\n')
				linetemp[i++] = '\n';
			linetemp[i] = '\0';
			// ft_strcpy(remainder, newline_pos + 1);
			// free(line);
			return linetemp;
		}
		if (read_bytes == 0)
		{
			if (line[0] == '\0')
			{
				free(line);
				return NULL;
			}
			// free(linetemp);
			return (line);
		}
	}
}
