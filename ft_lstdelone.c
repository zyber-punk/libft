/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzyberaj <uzyberaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:33:41 by uzyberaj          #+#    #+#             */
/*   Updated: 2024/12/04 14:04:30 by uzyberaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
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
	t_list	*to_delete;
	t_list	*next;

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
		printf("Content: %s\n", (char *)current->content);
		current = current->next;
	}
	to_delete = head;
	head = head->next;
	ft_lstdelone(to_delete, free);
	printf("\nListe après suppression du premier noeud :\n");
	current = head;
	while (current)
	{
		printf("Content: %s\n", (char *)current->content);
		current = current->next;
	}
	while (head)
	{
		next = head->next;
		ft_lstdelone(head, free);
		head = next;
	}
	return (0);
}
*/