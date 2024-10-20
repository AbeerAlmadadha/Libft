/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmadad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:03:41 by aalmadad          #+#    #+#             */
/*   Updated: 2024/09/14 20:30:36 by aalmadad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;
	char	*b;

	b = (char *)big;
	i = 0;
	if (!*little)
		return (b);
	while (b[i] && i < len)
	{
		x = 0;
		while (little[x] && b[i + x] == little[x] && (i + x) < len)
			x++;
		if (!little[x])
			return (b + i);
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char a[] = "hello world";
	char b[] = "e";

	if (!ft_strnstr(a,b,1))
		printf("g");
	//printf("%s\n", ft_strnstr(a,b,1));
	//return 0;
}*/
