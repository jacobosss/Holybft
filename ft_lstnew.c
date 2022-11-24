/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaieb <ytaieb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:59:09 by ytaieb            #+#    #+#             */
/*   Updated: 2022/11/22 19:26:18 by ytaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lili;

	lili = malloc (sizeof(t_list));
	if (lili == NULL)
		return (NULL);
	lili->content = content;
	lili->next = NULL;
	return (lili);
}
