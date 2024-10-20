/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmadad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:09:43 by aalmadad          #+#    #+#             */
/*   Updated: 2024/09/04 19:23:31 by aalmadad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strdup(const char *s)
{
	char	*n;
	int		i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	n = (char *)malloc(i + 1);
	if (n == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		n[i] = s[i];
		i++;
	}
	n[i] = '\0';
	return (n);
}
/*
int	main(void)
{
	printf("%s\n", strdup("Abeer"));
	printf("%s\n", ft_strdup("Abeer"));
	return (0);
}*/
