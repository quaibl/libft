/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-05 11:06:48 by mquaibl           #+#    #+#             */
/*   Updated: 2026-11-05 11:06:48 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (1)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)s + i);
		if (i == 0)
			break ;
		i--;
	}
	return (NULL);
}

/* Manual test: remove the comment delimiters only when testing. */
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("%s (expected a)\n", ft_strrchr("banana", 'a'));
	printf("%s (expected abc)\n", ft_strrchr("abc", 'a'));
	return (0);
}
*/
