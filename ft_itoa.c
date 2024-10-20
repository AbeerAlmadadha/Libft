/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmadad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:04:15 by aalmadad          #+#    #+#             */
/*   Updated: 2024/09/12 15:12:17 by aalmadad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static int	n_of_digits(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	long	x;
	int		i;

	x = n;
	i = n_of_digits(x);
	s = malloc(i + 1);
	if (s == NULL)
		return (NULL);
	if (x == 0)
		s[0] = '0';
	else if (x < 0)
	{
		x = -x;
		s[0] = '-';
	}
	s[i--] = '\0';
	while (x)
	{
		s[i] = x % 10 + '0';
		x = x / 10;
		i--;
	}
	return (s);
}
