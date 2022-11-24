/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaieb <ytaieb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:08:07 by ytaieb            #+#    #+#             */
/*   Updated: 2022/11/23 17:25:27 by ytaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*putword(char c, const char *s)
{
	char			*str;
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			break ;
		++i;
	}
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	while (j < i)
	{
		str[j] = s[j];
		++j;
	}
	return (str);
}

static size_t	countnbstr(char c, char const *s)
{
	size_t	i;
	size_t	count;
	bool	is_word;

	count = 0;
	if (s != NULL)
	{
		i = 0;
		is_word = false;
		while (s[i] != '\0')
		{
			if (s[i] != c)
			{
				if (is_word == false)
					++count;
				is_word = true;
			}
			else
				is_word = false;
			++i;
		}
	}
	return (count);
}

static void	free_strs(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i --;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char		**str;
	size_t		nbof_word;
	size_t		i;

	nbof_word = countnbstr(c, s);
	str = malloc(sizeof(char *) * (nbof_word + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < nbof_word)
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != c && *s != '\0')
			str[i] = putword(c, s);
		if (str[i] == NULL)
			free_strs(str, i);
		s += ft_strlen(str[i]);
		++i;
	}
	str[i] = NULL;
	return (str);
}
