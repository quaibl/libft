/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-09 15:19:49 by mquaibl           #+#    #+#             */
/*   Updated: 2026-11-09 15:19:49 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

#/* include <stdio.h>

int	main(void)
{
	char	str1[] = "ABCDE";
	char	str2[] = "ABCXE";

	printf("ft_memcmp (match): %d\n", ft_memcmp(str1, str2, 3));
	printf("ft_memcmp (diff) : %d\n", ft_memcmp(str1, str2, 4));
	return (0);
}
 */