/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 21:13:45 by amontano          #+#    #+#             */
/*   Updated: 2018/04/25 19:12:01 by amontano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long int	sign;
	long long int	final;
	unsigned int	i;

	sign = 1;
	final = 0;
	i = 0;
	while (ft_iswhitespace(str[i]) == 1)
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]) == 1)
	{
		final *= 10;
		final += str[i] - '0';
		i++;
	}
	return (sign * final);
}
