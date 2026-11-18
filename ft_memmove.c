/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-09 08:07:37 by mquaibl           #+#    #+#             */
/*   Updated: 2026-11-09 08:07:37 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*src_tmp;
	unsigned char		*dest_tmp;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	src_tmp = (const unsigned char *)src;
	dest_tmp = (unsigned char *)dest;
	i = 0;
	if (dest_tmp > src_tmp)
	{
		while (n--)
		{
			dest_tmp[n] = src_tmp[n];
		}
	}
	else
	{
		while (i < n)
		{
			dest_tmp[i] = src_tmp[i];
			i++;
		}
	}
	return (dest);
}

/* Manual test: remove the comment delimiters only when testing. */
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	s[] = "abcdef";

	ft_memmove(s + 2, s, 4);
	printf("%s (expected ababcd)\n", s);
	return (0);
}
*/
