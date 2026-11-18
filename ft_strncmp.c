/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-06 08:32:19 by mquaibl           #+#    #+#             */
/*   Updated: 2026-11-06 08:32:19 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libelf.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strncmp("hello", "hello", 5));
	printf("%d\n", ft_strncmp("hello", "hallo", 5));
	printf("%d\n", ft_strncmp("abc", "abd", 3));
	printf("%d\n", ft_strncmp("abc", "abcd", 4));
	printf("%d\n", ft_strncmp("abcd", "abc", 4));
	return (0);
} */
