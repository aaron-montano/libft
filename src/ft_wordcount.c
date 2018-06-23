/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 00:12:23 by amontano          #+#    #+#             */
/*   Updated: 2018/04/26 01:17:36 by amontano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_wordcount(char const *str)
{
	unsigned int	words;

	words = 0;
	while (*str && ft_iswhitespace(*str) == 1)
		str++;
	while (*str)
	{
		while (ft_iswhitespace(*str) == 0 && ft_isprint(*str) == 1)
			str++;
		if (ft_iswhitespace(*str) == 0 || !*str)
			words++;
	}
	return (words);
}
