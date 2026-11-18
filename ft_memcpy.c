/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-07 13:47:52 by mquaibl           #+#    #+#             */
/*   Updated: 2026-11-07 13:47:52 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*src_tmp;
	unsigned char		*dest_tmp;
	size_t				i;

	src_tmp = (const unsigned char *)src;
	dest_tmp = (unsigned char *)dest;
	i = 0;
	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		dest_tmp[i] = src_tmp[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[10];

	memset(dest, 0, sizeof(dest));
	ft_memcpy(dest, "Hello", 3);
	printf("%s\n", dest);
	memcpy(dest, "Hello", 3);
	printf("%s\n", dest);
	return (0);
}
 */