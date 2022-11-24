/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaieb <ytaieb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:51:46 by ytaieb            #+#    #+#             */
/*   Updated: 2022/11/23 17:22:50 by ytaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*str;
	unsigned int		i;

	str = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (str == 0)
		return (0);
	i = 0;
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i ++;
	}
	str[i] = '\0';
	return (str);
}
