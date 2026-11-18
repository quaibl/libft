/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-03 16:04:25 by mquaibl           #+#    #+#             */
/*   Updated: 2026-11-03 16:04:25 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/* Manual test: remove the comment delimiters only when testing. */
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("127: %d, 128: %d (expected 1, 0)\n",
		ft_isascii(127), ft_isascii(128));
	return (0);
}
*/
