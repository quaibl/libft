/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-17 16:18:46 by mquaibl           #+#    #+#             */
/*   Updated: 2026-11-17 16:18:46 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libelf.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* #include <stdio.h>

void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}


int	main(void)
{
	t_list	*head;

	head = ft_lstnew("Apple");
	ft_lstadd_back(&head, ft_lstnew("Banana"));
	ft_lstadd_back(&head, ft_lstnew("Orange"));
	ft_lstiter(head, print_content);
	return (0);
} */
