/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmadad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:53:34 by aalmadad          #+#    #+#             */
/*   Updated: 2024/09/12 16:28:35 by aalmadad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_isalnum(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)
		|| (ch >= 48 && ch <= 57))
		return (8);
	return (0);
}	
/*
int	main(void)
{
	printf("%d\n", isalnum('3'));
	printf("%d\n", isalnum('o'));
	printf("%d\n", isalnum('&'));
	printf("%d\n\n", isalnum(512));
	printf("%d\n", ft_isalnum('3'));
	printf("%d\n", ft_isalnum('o'));
	printf("%d\n", ft_isalnum('&'));
	printf("%d\n", ft_isalnum(512));
	return (0);
}*/
