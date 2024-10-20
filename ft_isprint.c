/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmadad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:24:23 by aalmadad          #+#    #+#             */
/*   Updated: 2024/09/03 21:20:53 by aalmadad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d\n", isprint('a'));
	printf("%d\n", isprint('5'));
	printf("%d\n", isprint('\n'));
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", ft_isprint('5'));
	printf("%d\n", ft_isprint('\n'));
	return (0);
}*/
