/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmadad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:41:34 by aalmadad          #+#    #+#             */
/*   Updated: 2024/09/03 20:52:34 by aalmadad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (2048);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d\n", isdigit('5'));
	printf("%d\n", isdigit('d'));
	printf("%d\n", isdigit(300));
	printf("%d\n", ft_isdigit('5'));
	printf("%d\n", ft_isdigit('d'));
	printf("%d\n", ft_isdigit(300));
	return (0);
}
*/
