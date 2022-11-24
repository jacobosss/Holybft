/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaieb <ytaieb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:29:02 by ytaieb            #+#    #+#             */
/*   Updated: 2022/11/23 16:36:32 by ytaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	if ((size == 0 || nmemb == 0))
		return (malloc(0));
	if (size > SIZE_MAX / nmemb)
		return (0);
	tab = malloc(nmemb * size);
	if (tab == 0)
		return (0);
	ft_memset((unsigned char *)tab, 0, nmemb * size);
	return (tab);
}
