/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmadad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 20:58:04 by aalmadad          #+#    #+#             */
/*   Updated: 2024/09/12 17:17:35 by aalmadad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*m;
	size_t			i;

	m = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		m[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char	s[10];
	int	i;

	i = 0;
//	bzero(s, 5);
	ft_bzero(s, 5);
	while (i < 10)
	{
		if (s[i] == '\0')
			printf("n");
		else
			printf("o");
		i++;
	}
	return (0);
}*/
