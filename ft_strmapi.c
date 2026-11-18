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

/* #include <stdio.h>

int	main(void)
{
	char	*result;

	result = ft_strmapi("hello", change_char);
	if (!result)
		return (1);
	printf("Original: %s\n", "hello");
	printf("Result:   %s\n", result);
	free(result);
	return (0);
}
 */