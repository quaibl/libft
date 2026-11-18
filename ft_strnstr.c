/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-10 15:03:44 by mquaibl           #+#    #+#             */
/*   Updated: 2026-11-10 15:03:44 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < n)
	{
		j = 0;
		while (little[j] && big[i + j] == little[j] && i + j < n)
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>

int	main(void)
{
	char	*big;
	char	*little;
	char	*result;

	big = "Hello World";
	little = "World";
	result = ft_strnstr(big, little, 11);
	if (result != NULL)
		printf("Found: %s\n", result);
	else
		printf("Not found\n");
	return (0);
}
 */