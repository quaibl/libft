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

#include "libft.h"

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

/* Manual test: remove the comment delimiters only when testing. */
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static void	test_print(void *content)
{
	printf("%s ", (char *)content);
}

int	main(void)
{
	t_list	*head;

	head = ft_lstnew("one");
	ft_lstadd_back(&head, ft_lstnew("two"));
	ft_lstiter(head, test_print);
	printf("\n");
	free(head->next);
	free(head);
	return (0);
}
*/
