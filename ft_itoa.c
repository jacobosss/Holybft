/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaieb <ytaieb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:58:03 by ytaieb            #+#    #+#             */
/*   Updated: 2022/11/22 20:48:34 by ytaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countnbr(long int n)
{
	long int	i;

	i = 0;
	if (n < 0)
	{
		n = n * (-1);
		i ++;
	}
	while (n >= 10)
	{
		i ++;
		n = n / 10;
	}
	if (n < 10)
	{
		i ++;
	}
	return (i);
}

static unsigned int	ifnegatif(int n, char *str)
{
	unsigned int	t;

	if (n < 0)
	{
		str[0] = '-';
		t = -n;
	}
	else
		t = n;
	return (t);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				sf;
	unsigned int	t;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sf = countnbr(n);
	str = malloc((sf + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[sf] = '\0';
	sf --;
	t = ifnegatif(n, str);
	while (t >= 10)
	{
		str[sf] = t % 10 + '0';
		t = t / 10;
		sf --;
	}
	if (t < 10)
		str[sf] = t + '0';
	return (str);
}
