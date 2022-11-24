/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaieb <ytaieb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:49:08 by ytaieb            #+#    #+#             */
/*   Updated: 2022/11/23 17:22:18 by ytaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	str = malloc ((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (str == 0)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		str[j] = s1[i];
		i ++;
		j ++;
	}
	i = 0;
	while (s2[i])
	{
		str[j] = s2[i];
		i ++;
		j ++;
	}
	str[j] = '\0';
	return (str);
}
