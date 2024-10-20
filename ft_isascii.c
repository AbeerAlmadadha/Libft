/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmadad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:00:39 by aalmadad          #+#    #+#             */
/*   Updated: 2024/09/03 18:11:25 by aalmadad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d\n", isascii(127));
	printf("%d\n", isascii(500));
	printf("%d\n", isascii(-1));
	printf("%d\n", ft_isascii(127));
	printf("%d\n", ft_isascii(500));
	printf("%d\n", ft_isascii(-1));
	return (0);
}*/
