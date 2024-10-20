/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmadad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:10:47 by aalmadad          #+#    #+#             */
/*   Updated: 2024/09/12 16:22:42 by aalmadad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static int	word_count(const char *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			n++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (n);
}

static char	**copy_words(const char *s, char **n, char c)
{
	size_t	i;
	size_t	x;
	size_t	a;

	i = 0;
	x = 0;
	while (s[i])
	{
		a = 0;
		while (s[i] == c && s[i])
			i++;
		if (s[i] && s[i] != c)
		{
			while (s[i] != c && s[i])
				n[x][a++] = s[i++];
			n[x][a] = '\0';
			x++;
		}
	}
	n[x] = NULL;
	return (n);
}

static void	*ft_free(char **n)
{
	int	x;

	x = 0;
	while (n[x])
	{
		free(n[x]);
		x++;
	}
	free(n);
	return (NULL);
}

static void	*ft_alloc(const char *s, char c, char **split)
{
	size_t	i;
	size_t	x;
	size_t	a;

	x = 0;
	i = 0;
	while (s[i])
	{
		a = 0;
		if (s[i] != c)
		{
			while (s[i + a] != c && s[i + a])
				a++;
			split[x] = malloc((a + 1) * sizeof(char));
			if (split[x] == NULL)
				return (ft_free(split));
			x++;
			i = i + a;
		}
		else
			i++;
	}
	split[x] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (s == NULL)
		return (NULL);
	split = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	split = ft_alloc(s, c, split);
	if (!split)
		return (NULL);
	return (copy_words(s, split, c));
}
/*
 int main ()
 {
 	char **str;
	int		n = 0;
 	str = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", '^');

 	while (n < 4)
	{
		printf("%s\n", str[n]);
		n++; 	
	}
	return (0);
 }*/
