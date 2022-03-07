/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimbrea <dimbrea@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:31:36 by dimbrea           #+#    #+#             */
/*   Updated: 2022/03/06 22:11:06 by dimbrea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

char	*ft_strchr(char *buffer, char c)
{
	while (*buffer)
	{
		if (*buffer == c)
			return (buffer);
		buffer++;
	}
	if (c == '\0' && *buffer == '\0')
		return (buffer);
	return (NULL);
}

char	*ft_strjoin(char *save, char *buffer)
{
	char	*p;
	int		i;
	int		j;

	p = malloc(sizeof(char) * (ft_strlen(save) + ft_strlen(buffer)) + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (save[i])
	{
		p[i] = save[i];
		i++;
	}
	j = 0;
	while (buffer[j])
	{
		p[i] = buffer[j];
		i++;
		j++;
	}
	p[i] = '\0';
	free(save);
	return (p);
}

void	*ft_memset(void *str, int c, size_t n)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)str;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (p);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	ft_memset(p, 0, nmemb * size);
	return (p);
}
