/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-10 09:30:41 by mquaibl           #+#    #+#             */
/*   Updated: 2026-11-10 09:30:41 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	i;

	src_len = ft_strlen(src);
	dest_len = 0;
	i = 0;
	while (dest_len < size && dest[dest_len])
		dest_len++;
	if (dest_len == size)
		return (size + src_len);
	while (src[i] && i < size - dest_len - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/* Manual test: remove the comment delimiters only when testing. */
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	destination[10] = "ab";
	size_t	length;

	length = ft_strlcat(destination, "cdef", sizeof(destination));
	printf("%s, length %zu (expected abcdef, 6)\n",
		destination, length);
	return (0);
}
*/
