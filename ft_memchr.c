/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaieb <ytaieb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:24:21 by ytaieb            #+#    #+#             */
/*   Updated: 2022/11/23 15:40:22 by ytaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*t;

	t = (const char *)s;
	i = 0;
	if (n == 0 && c == 0)
		return (0);
	while (i < n)
	{
		if (t[i] == (char)c)
			return ((void *)s + i);
		i ++;
	}
	return (0);
}
