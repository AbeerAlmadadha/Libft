/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmadad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:46:01 by aalmadad          #+#    #+#             */
/*   Updated: 2024/09/12 18:22:49 by aalmadad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static int	isinset(char const *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*start;
	const char	*end;
	char		*trimmed_str;
	size_t		tr_len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = s1;
	while (*start && isinset(set, *start))
		start++;
	if (*start == '\0')
		return (ft_strdup(""));
	end = s1 + ft_strlen(s1) - 1;
	while (end > start && isinset(set, *end))
		end--;
	tr_len = end - start + 1;
	trimmed_str = (char *)malloc(tr_len + 1);
	if (trimmed_str == NULL)
		return (NULL);
	ft_strlcpy(trimmed_str, start, tr_len + 1);
	trimmed_str[tr_len] = '\0';
	return (trimmed_str);
}
