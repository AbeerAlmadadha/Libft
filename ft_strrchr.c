/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmadad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:39:30 by aalmadad          #+#    #+#             */
/*   Updated: 2024/09/12 17:49:40 by aalmadad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*r;

	r = NULL;
	while (*s)
	{
		if (*s == (char)c)
			r = s;
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return ((char *)r);
}
/*
char  *ft_strrchr(const char *s, int c)
{
	while (*s)
	{
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	while (s--)
	{
		if (*s == c)
			return ((char *)s);
	}
	return (NULL);
}
*/
/*
int	main(void)
{
	if (ft_strrchr("Abeer", 'k'))
		printf("%s\n", ft_strrchr("Abeer", 'k'));
	else
		printf("not found");
	return (0);
}*/
