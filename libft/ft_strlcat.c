/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhatsago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 15:31:36 by zhatsago          #+#    #+#             */
/*   Updated: 2021/01/31 14:13:49 by zhatsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t a;
	size_t b;
	size_t c;

	a = 0;
	while (dest[a] != '\0')
		++a;
	c = 0;
	while (src[c] != '\0')
		++c;
	if (size <= a)
		c += size;
	else
		c += a;
	b = 0;
	while (src[b] != '\0' && a + 1 < size)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (c);
}
