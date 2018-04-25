/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 23:10:54 by amontano          #+#    #+#             */
/*   Updated: 2018/04/24 22:11:59 by amontano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (s == NULL || str == NULL || start > ft_strlen(s))
		return (NULL);
	while (i < start)
		i++;
	while (i < len && s[i])
	{
		str[i++] = s[start++];
	}
	str[i] = '\0';
	return (str);
}
