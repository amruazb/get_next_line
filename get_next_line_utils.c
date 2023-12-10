/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 02:01:58 by amru              #+#    #+#             */
/*   Updated: 2023/12/10 20:03:38 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
		if (!*s++)
			return (0);
	return ((char *)s);
}
char *ft_strcpy(char *s1, char *s2)
{
	if (!s1)
		return NULL;
	char *ps = s1;
	while(*s2)
	{
		*ps++ = *s2++;
	}
	*ps = '\0';
	return(s1);
}
char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;

	s2 = malloc(ft_strlen(s1) + 1);
	if (!s2)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ps1;
	char	*ptr;
	int		tlen;

	if (!s1 && !s2)
		return (NULL);
	tlen = ft_strlen(s1) + ft_strlen(s2);
	ps1 = malloc(sizeof(char) * (tlen + 1));
	if (!ps1)
		return (NULL);
	ptr = ps1;
	if (s1)
		while (*s1)
			*ptr++ = *s1++;
	if (s2)
		while (*s2)
			*ptr++ = *s2++;
	*ptr = '\0';
	return (ps1);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*s;
	char		*d;

	s = src;
	d = dst;
	if (dst == NULL && src == NULL)
	{
		return (NULL);
	}
	while (n-- > 0)
	{
		*d++ = *s++;
	}
	return (dst);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	to_copy;

	srclen = ft_strlen(src);
	if (dstsize == 0)
	{
		return (srclen);
	}
	to_copy = srclen;
	if (dstsize - 1 < srclen)
	{
		to_copy = dstsize - 1;
	}
	ft_memcpy(dst, src, to_copy);
	dst[to_copy] = '\0';
	return (srclen);
}
