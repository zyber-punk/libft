/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzyberaj <uzyberaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 19:33:39 by uzyberaj          #+#    #+#             */
/*   Updated: 2024/12/04 14:04:09 by uzyberaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*
#include <stdio.h>

int	main(void)
{
	t_list	*new_node1;

	new_node1 = ft_lstnew("Node 1");
	printf("Content: %s\n", (char *)new_node1->content);
	if (new_node1 -> next == NULL)
		printf("Content: NULL\n");
}
*/