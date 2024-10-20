/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmadad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 20:25:48 by aalmadad          #+#    #+#             */
/*   Updated: 2024/09/04 19:03:50 by aalmadad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*m = (const unsigned char*)s;
	size_t				i;

	i = 0;
	while (i < n)
	{
		if (*m == (unsigned char)c)
			return ((void *)m);
		i++;
		m++;
	}
	return (NULL);
}
/*
int	main(void)
{

	return (0);
}*/
