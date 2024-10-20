/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmadad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:03:26 by aalmadad          #+#    #+#             */
/*   Updated: 2024/09/12 18:02:36 by aalmadad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*s;
	size_t			i;

	s = (unsigned char *)malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		s[i] = '\0';
		i++;
	}
	return ((void *)s);
}
/*
int	main(void)
{
	unsigned char	*a = (unsigned char *)calloc(3, 4);
	unsigned char	*b = (unsigned char *)ft_calloc(3, 4);
	size_t	i;
	size_t	n;
	size_t	s;

	i = 0;
	n = 3;
	s = 4;
	while (i < n * s)
	{
		printf("%u", a[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < n * s)
        {
                printf("%u", b[i]);
                i++;
        }
	return (0);
}*/
