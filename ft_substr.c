/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmadad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:26:10 by aalmadad          #+#    #+#             */
/*   Updated: 2024/09/08 21:21:17 by aalmadad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*n;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (start + len > s_len)
		len = s_len - start;
	n = (char *)malloc(len + 1);
	if (n == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		n[i] = s[start + i];
		i++;
	}
	n[i] = '\0';
	return (n);
}
/*
int	main(void)
{
	printf("%s\n", ft_substr("Abeer", 1, 3));
	return (0);
}*/
