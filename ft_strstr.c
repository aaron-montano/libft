/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 16:02:37 by amontano          #+#    #+#             */
/*   Updated: 2018/04/18 16:10:03 by amontano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (s1[0] && s2[0])
		return ((char *)s1);
	while (s1[i])
	{
		j = 0;
		while (s2[j] && s1[i + j] == s2[j])
			j++;
		if (!s2[j])
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}