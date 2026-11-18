/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-06 15:21:50 by mquaibl           #+#    #+#             */
/*   Updated: 2026-11-06 15:21:50 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	while (n > 0)
	{
		*tmp = '\0';
		tmp++;
		n--;
	}
}

/* Manual test: remove the comment delimiters only when testing. */
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	s[] = "hello";

	ft_bzero(s, 2);
	printf("bytes: %d %d %c (expected 0 0 l)\n",
		s[0], s[1], s[2]);
	return (0);
}
*/
