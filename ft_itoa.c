/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-16 08:17:20 by mquaibl           #+#    #+#             */
/*   Updated: 2026-11-16 08:17:20 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(long nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nbr;
	int		len;
	char	*res;

	nbr = n;
	len = get_len(nbr);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		res[0] = '0';
	while (nbr > 0)
	{
		res[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (res);
}

/* #include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*str;

	str = ft_itoa(123);
	printf("123  -> %s\n", str);
	free(str);
	str = ft_itoa(-456);
	printf("-456 -> %s\n", str);
	free(str);
	str = ft_itoa(0);
	printf("0    -> %s\n", str);
	free(str);
	str = ft_itoa(-7);
	printf("-7   -> %s\n", str);
	free(str);
	str = ft_itoa(2147483647);
	printf("INT_MAX -> %s\n", str);
	free(str);
	str = ft_itoa(-2147483648);
	printf("INT_MIN -> %s\n", str);
	free(str);
	return (0);
}
 */