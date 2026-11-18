/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-12 12:01:27 by mquaibl           #+#    #+#             */
/*   Updated: 2026-11-12 12:01:27 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*copy_word(char const *s, int start, int end)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i++] = s[start++];
	}
	word[i] = '\0';
	return (word);
}

static void	free_words(char **result, int count)
{
	int	i;

	i = 0;
	while (i < count)
		free(result[i++]);
	free(result);
}

static char	*get_word(char const *s, int *i, char c)
{
	int	start;

	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	return (copy_word(s, start, *i));
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			result[j] = get_word(s, &i, c);
			if (!result[j])
				return (free_words(result, j), NULL);
			j++;
		}
	}
	result[j] = NULL;
	return (result);
}

/* Manual test: remove the comment delimiters only when testing. */
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	**words;
	int		i;

	words = ft_split("one,,two", ',');
	if (!words)
		return (1);
	i = 0;
	while (words[i])
	{
		printf("word %d: %s\n", i, words[i]);
		free(words[i++]);
	}
	free(words);
	return (0);
}
*/
