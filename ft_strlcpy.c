/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmadad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:10:34 by aalmadad          #+#    #+#             */
/*   Updated: 2024/09/04 19:01:54 by aalmadad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	x;

	x = 0;
	while (src[x])
	{
		x++;
	}
	if (size == 0)
		return (x);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (x);
}
/*
int	main(void)
{
	char	dst[1];
	const char	src[] = "Abeer";

	//printf("%zu\n", strlcpy(dst, src, sizeof(dst)));
	printf("%zu\n", ft_strlcpy(dst, src, sizeof(dst)));
	printf("%s\n", dst);
	return (0);
}*/
