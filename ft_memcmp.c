/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmadad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 20:42:35 by aalmadad          #+#    #+#             */
/*   Updated: 2024/09/04 18:48:57 by aalmadad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*st1;
	const unsigned char	*st2;
	size_t				i;

	i = 0;
	st1 = (const unsigned char *)s1;
	st2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (st1[i] != st2[i])
			return (st1[i] - st2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", memcmp("Abeer", "Abeer", 5));
	printf("%d\n", ft_memcmp("Abeer", "Abeer", 5));
	return (0);
}*/
