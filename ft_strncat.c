/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 18:02:04 by amontano          #+#    #+#             */
/*   Updated: 2018/04/19 18:12:58 by amontano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*dest;
	char	*src;
	size_t	i;

	dest = s1;
	src = (char *)s2;
	while (*dest)
		dest++;
	i = 0;
	while (i < n && src[i])
	{
		*dest = src[i];
		dest++;
		i++;
	}
	*dest = '\0';
	return (dest);
}
