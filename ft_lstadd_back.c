/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaieb <ytaieb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:52:47 by ytaieb            #+#    #+#             */
/*   Updated: 2022/11/23 14:18:46 by ytaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (!(new == NULL || lst == NULL))
	{
		if (temp == NULL)
			*lst = new;
		else
		{
			while ((temp)->next != NULL)
				temp = temp->next;
			temp->next = new;
		}
	}
}
