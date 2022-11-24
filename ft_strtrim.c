/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaieb <ytaieb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:37:12 by ytaieb            #+#    #+#             */
/*   Updated: 2022/11/18 12:16:01 by ytaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isinset(char const c, char const *set1)
{
	int	i;

	i = 0;
	while (set1[i])
	{
		if (set1[i] == c || c == 0)
			return (1);
		i ++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;

	i = 0;
	while (ft_isinset(s1[i], set) && s1[i])
		i ++;
	if (s1[i] == '\0')
		return (ft_strdup(""));
	j = ft_strlen(s1);
	while (ft_isinset(s1[j], set))
		j --;
	return (ft_substr(s1, i, (j - i) + 1));
}
