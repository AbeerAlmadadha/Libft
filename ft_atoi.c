/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmadad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:39:00 by aalmadad          #+#    #+#             */
/*   Updated: 2024/09/03 20:22:22 by aalmadad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	x;
	int	sign;

	i = 0;
	x = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || (nptr[i] == 32))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		x = x * 10 + nptr[i] - 48;
		i++;
	}
	return (x * sign);
}
/*
int	main(void)
{
	printf("%d\n", atoi("  $-112154"));
	printf("%d\n", ft_atoi("$-1-12154"));
	return (0);
}*/
