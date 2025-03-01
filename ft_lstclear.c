/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzyberaj <uzyberaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:35:42 by uzyberaj          #+#    #+#             */
/*   Updated: 2024/12/04 14:04:34 by uzyberaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*tmp;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		tmp = current;
		current = current->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
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

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dup;

	i = 0;
	while (src[i] != '\0')
		i++;
	dup = malloc(sizeof(char) * i + 1);
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	main(void)
{
	t_list	*head;
	t_list	*new_node1;
	t_list	*new_node2;
	t_list	*new_node3;
	t_list	*current;

	new_node1 = ft_lstnew(ft_strdup("Node 1"));
	new_node2 = ft_lstnew(ft_strdup("Node 2"));
	new_node3 = ft_lstnew(ft_strdup("Node 3"));
	head = NULL;
	ft_lstadd_front(&head, new_node3);
	ft_lstadd_front(&head, new_node2);
	ft_lstadd_front(&head, new_node1);
	printf("Liste avant suppression :\n");
	current = head;
	while (current)
	{
		printf("Content: %s | Address: %p\n", (char *)current->content, current);
		current = current->next;
	}
	ft_lstclear(&head -> next, free);
	printf("\nListe après suppression des noeuds apres head :\n");
	printf("Content: %s | Address: %p\n", (char *)head->content, head);
	printf("Content: %p\n", head->next);
	ft_lstclear(&head, free);
	return (0);
}
*/