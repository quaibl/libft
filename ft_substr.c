/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-11 09:16:51 by mquaibl           #+#    #+#             */
/*   Updated: 2026-11-11 09:16:51 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	str_len;
	size_t	substr_len;
	size_t	i;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		substr_len = 0;
	else if (len > str_len - start)
		substr_len = str_len - start;
	else
		substr_len = len;
	result = malloc(sizeof(char) * (substr_len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < substr_len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

/* Manual test: remove the comment delimiters only when testing. */
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*part;

	part = ft_substr("abcdef", 2, 3);
	if (!part)
		return (1);
	printf("%s (expected cde)\n", part);
	free(part);
	return (0);
}
*/
