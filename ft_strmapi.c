/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-16 10:03:44 by mquaibl           #+#    #+#             */
/*   Updated: 2026-11-16 10:03:44 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char	change_char(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (c - 32);
	return (c);
} */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	len;
	size_t	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = f((unsigned int)i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/* Manual test: remove the comment delimiters only when testing. */
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static char	test_map(unsigned int index, char c)
{
	return ((char)(c + index));
}

int	main(void)
{
	char	*mapped;

	mapped = ft_strmapi("abc", test_map);
	if (!mapped)
		return (1);
	printf("%s (expected ace)\n", mapped);
	free(mapped);
	return (0);
}
*/
