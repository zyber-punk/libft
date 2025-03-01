/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzyberaj <uzyberaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:19:06 by uzyberaj          #+#    #+#             */
/*   Updated: 2024/12/04 14:04:41 by uzyberaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*
#include <stdio.h>

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

int	main(void)
{
	t_list	*head;
	t_list	*new_node1;
	t_list	*new_node2;
	t_list	*new_node3;
	t_list	*current;

	head = NULL;
	new_node1 = ft_lstnew("Node 1");
	new_node2 = ft_lstnew("Node 2");
	new_node3 = ft_lstnew("Node 3");
	ft_lstadd_front(&head, new_node1);
	ft_lstadd_front(&head, new_node2);
	ft_lstadd_front(&head, new_node3);
	current = head;
	while (current)
	{
		printf("Content: %s\n", (char *)current->content);
		current = current->next;
	}
	free(new_node1);
	free(new_node2);
	free(new_node3);
	return (0);
}
*/