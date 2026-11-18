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
	ft_memcpy(dup, src, len + 1);
	return (dup);
}

/* Manual test: remove the comment delimiters only when testing. */
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*duplicate;

	duplicate = ft_strdup("Hello 42!");
	if (!duplicate)
		return (1);
	printf("%s (expected Hello 42!)\n", duplicate);
	free(duplicate);
	return (0);
}
*/
