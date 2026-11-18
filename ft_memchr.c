/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-07 09:59:18 by mquaibl           #+#    #+#             */
/*   Updated: 2026-11-07 09:59:18 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n > 0)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
		n--;
	}
	return (NULL);
}

/*#include <stdio.h>
int main(void)
{
    char str[] = "Hello World";
    char *res = ft_memchr(str, 'W', 11);
    if (res)
        printf("Found: %s\n", res);
    else
        printf("Not found\n");
    return (0);
}*/
