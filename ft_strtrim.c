/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 21:48:58 by amontano          #+#    #+#             */
/*   Updated: 2018/04/24 22:27:29 by amontano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s);
	while (ft_iswhitespace(s[start]) == 1)
		start++;
	while (ft_iswhitespace(s[end]) == 1)
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (str == NULL || s == NULL)
		return (NULL);
	while (start <= end)
	{
		str[start] = s[start];
		start++;
	}
	str[start] = '\0';
	return (str);
}
