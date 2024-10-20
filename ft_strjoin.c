/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmadad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:18:58 by aalmadad          #+#    #+#             */
/*   Updated: 2024/09/04 18:58:57 by aalmadad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	x;
	char	*n;

	if (!s1 || !s2)
		return (NULL);
	n = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (n == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		n[i] = s1[i];
		i++;
	}
	x = 0;
	while (s2[x])
	{
		n[i] = s2[x];
		i++;
		x++;
	}	
	n[i] = '\0';
	return (n);
}
/*
int	main(void)
{
	printf("%s\n", ft_strjoin("abeer ", "aalmadad"));
}*/
