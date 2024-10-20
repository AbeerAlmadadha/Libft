/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmadad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:31:56 by aalmadad          #+#    #+#             */
/*   Updated: 2024/09/14 20:25:02 by aalmadad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1024);
	else
		return (0);
}

/*int	main(void)
{
	printf("%d\n", isalpha('a'));
	printf("%d\n", isalpha('0'));
	printf("%d\n", isalpha(300));
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('0'));
	printf("%d\n", ft_isalpha(300));
	return (0);
}*/
