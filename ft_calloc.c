/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-10 16:01:13 by mquaibl           #+#    #+#             */
/*   Updated: 2026-11-10 16:01:13 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	if (nmemb != 0 && size > (size_t)-1 / nmemb)
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}

/* #include <stdio.h>

int	main(void)
{
	int *numbers;
	int i;

	numbers = ft_calloc(5, sizeof(int));
	if (!numbers)
		return (1);
	i = 0;
	while (i < 5)
	{
		printf("%d\n", numbers[i]);
		i++;
	}
	free(numbers);
	return (0);
} */