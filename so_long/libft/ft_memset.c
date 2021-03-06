/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimbrea <dimbrea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:04:57 by dimbrea           #+#    #+#             */
/*   Updated: 2022/05/10 13:29:58 by dimbrea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	   The  memset()  function fills the first n bytes of the memory area
	   pointed to by s with the constant byte c.
*/
#include "libft.h"

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
