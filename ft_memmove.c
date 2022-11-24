/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaieb <ytaieb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:04:19 by ytaieb            #+#    #+#             */
/*   Updated: 2022/11/22 19:46:29 by ytaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL && src == NULL)
		return (dest);
	if (src < dest)
	{
		i = n;
		while (i > 0)
		{
			((unsigned char *) dest)[i - 1] = ((unsigned char *) src)[i - 1];
			i --;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
