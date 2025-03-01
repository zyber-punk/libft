/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzyberaj <uzyberaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:24:50 by uzyberaj          #+#    #+#             */
/*   Updated: 2024/12/04 14:04:18 by uzyberaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}

/*
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

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
	ft_lstadd_front(&head, new_node3);
	ft_lstadd_front(&head, new_node2);
	ft_lstadd_front(&head, new_node1);
	current = head;
	while (current)
	{
		printf("Content: %s | Address: %p\n", (char *)current->content, current);
		current = current->next;
	}
	printf("ft_lstlast: Content: %s ", (char *)ft_lstlast(head)->content);
	printf("| Address: %p\n", ft_lstlast(head));
	free(new_node1);
	free(new_node2);
	free(new_node3);
	return (0);
}
*/