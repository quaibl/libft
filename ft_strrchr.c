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
	if (c == '\0')
		return ((char *)s + i);
	i--;
	while (i > 0)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/* #include <stdio.h>

int	main(void)
{
	char	str[] = "bananna";

	printf("%s\n", ft_strrchr(str, 'b'));
	printf("%s\n", ft_strrchr(str, 'a'));
	printf("%p\n", (void *)ft_strrchr(str, 'x'));
	printf("%p\n", (void *)ft_strrchr(str, '\0'));
	return (0);
}
 */