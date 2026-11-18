/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-09 16:56:47 by mquaibl           #+#    #+#             */
/*   Updated: 2026-11-09 16:56:47 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

/* #include <stdio.h>

int	main(void)
{
	char	src[] = "Hello!";
	char	dest[10];
	size_t	l;

	l = ft_strlcpy(dest, src, 5);
	printf("String copied: %s\n", dest);
	printf("Return value (src length): %zu\n", l);
	return (0);
}
 */