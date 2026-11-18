/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-05 08:36:51 by mquaibl           #+#    #+#             */
/*   Updated: 2026-11-05 08:36:51 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	return (NULL);
}

/* #include <stdio.h>

int	main(void)
{
	char	str[] = "bananna";

	printf("%p\n", (void *)ft_strchr(str, 'H'));
	printf("%p\n", (void *)ft_strchr(str, 'i'));
	printf("%p\n", (void *)ft_strchr(str, 'x'));
	printf("%p\n", (void *)ft_strchr(str, '\0'));
	return (0);
}
 */