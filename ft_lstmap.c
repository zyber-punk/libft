/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzyberaj <uzyberaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:43:20 by uzyberaj          #+#    #+#             */
/*   Updated: 2024/12/04 14:04:15 by uzyberaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;
	void	*new_content;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_elem = ft_lstnew(new_content);
		if (!new_elem)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	return (new_list);
}

/*
void	*ft_map(void *content)
{
	char	*str;
	char	*new_str;
	int		i;

	str = (char *)content;
	new_str = malloc(strlen(str) + 4);
	if (!new_str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '_';
	new_str[i + 1] = 'm';
	new_str[i + 2] = 'p';
	new_str[i + 3] = '\0';
	return (new_str);
}

void	ft_del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst;
	t_list	*mapped_lst;
	t_list	*current;

	lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew(strdup("test1")));
	ft_lstadd_back(&lst, ft_lstnew(strdup("test2")));
	ft_lstadd_back(&lst, ft_lstnew(strdup("test3")));
	printf("Liste originale:\n");
	current = lst;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	mapped_lst = ft_lstmap(lst, ft_map, ft_del);
	printf("\nListe après mapping:\n");
	current = mapped_lst;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	ft_lstclear(&lst, ft_del);
	ft_lstclear(&mapped_lst, ft_del);
	return (0);
}
*/