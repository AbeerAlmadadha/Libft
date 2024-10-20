/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmadad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:36:50 by aalmadad          #+#    #+#             */
/*   Updated: 2024/09/12 16:49:19 by aalmadad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	printf("%ld\n", strlen(""));
	printf("%ld\n", strlen("Abeer"));
	printf("%ld\n", strlen("123"));
	printf("%ld\n", ft_strlen(""));
	printf("%ld\n", ft_strlen("Abeer"));
	printf("%ld\n", ft_strlen("123"));
	return (0);
}*/
