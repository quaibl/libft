/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-16 15:53:42 by mquaibl           #+#    #+#             */
/*   Updated: 2026-11-16 15:53:42 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/* #include <stdio.h>

int	main(void)
{
	t_list	*head;

	head = ft_lstnew("Apple");
	ft_lstadd_front(&head, ft_lstnew("Banana"));
	ft_lstadd_front(&head, ft_lstnew("Mango"));
	while (head)
	{
		printf("%s\n", (char *)head->content);
		head = head->next;
	}
	return (0);
}
 */