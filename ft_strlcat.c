/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmadad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:46:39 by aalmadad          #+#    #+#             */
/*   Updated: 2024/09/04 15:11:24 by aalmadad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	x;
	size_t	i;
	size_t	n;
	size_t	m;

	x = 0;
	i = 0;
	n = 0;
	while (dst[x])
		x++;
	m = x;
	while (src[i])
		i++;
	if (size <= x)
		return (size + i);
	while (src[n] && n < (size - x - 1))
		dst[m++] = src[n++];
	dst[m] = '\0';
	return (x + i);
}
/*
int	main(void)
{
	char	dst[10] = "aalmadad";
	const char	src[] = "Abeer";

	printf("%zu\n", strlcat(dst, src, sizeof(dst)));
	printf("%s", dst);
	return (0);
}*/
