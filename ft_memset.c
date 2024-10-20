/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmadad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:31:50 by aalmadad          #+#    #+#             */
/*   Updated: 2024/09/12 17:30:38 by aalmadad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*m;
	size_t			i;

	m = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		m[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char	s[20];
	int	i;

	i = 0;
//	memset(s, 'a', 10);
	ft_memset(s, 'a', 10);
	while (i < 20)
	{
		if (s[i])
			printf("%c", s[i]);
		else
			printf("o");
		i++;
	}
	return (0);
}*/
