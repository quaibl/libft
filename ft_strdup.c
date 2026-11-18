/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ strdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-10 16:25:30 by mquaibl           #+#    #+#             */
/*   Updated: 2026-11-10 16:25:30 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	len;
	char	*dup;

	if (!src)
		return (NULL);
	len = ft_strlen(src);
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	ft_memcpy(dup, src, len);
	return (dup);
}

/* #include <stdio.h>

int	main(void)
{
	char	*src;
	char	*dup;

	src = "Hello, 42!";
	dup = ft_strdup(src);
	if (!dup)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	printf("Original: %s\n", src);
	printf("Duplicate: %s\n", dup);
	printf("Original address: %p\n", (void *)src);
	printf("Duplicate address: %p\n", (void *)dup);
	free(dup);
	return (0);
}
 */