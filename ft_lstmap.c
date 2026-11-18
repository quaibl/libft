/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-17 16:49:48 by mquaibl           #+#    #+#             */
/*   Updated: 2026-11-17 16:49:48 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	new_list = NULL;
	if (!f || !del)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/* Manual test: remove the comment delimiters only when testing. */
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static void	*test_copy(void *content)
{
	return (ft_strdup((char *)content));
}

int	main(void)
{
	t_list	*source;
	t_list	*mapped;

	source = ft_lstnew("hello");
	mapped = ft_lstmap(source, test_copy, free);
	if (!mapped)
		return (1);
	printf("%s (expected hello)\n", (char *)mapped->content);
	ft_lstclear(&mapped, free);
	free(source);
	return (0);
}
*/
