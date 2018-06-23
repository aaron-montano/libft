/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 15:24:08 by amontano          #+#    #+#             */
/*   Updated: 2018/04/25 00:22:04 by amontano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *a;
	unsigned char *b;

	if (n == 0 || dst == src)
		return (dst);
	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	while (--n)
		*a++ = *b++;
	*a = *b;
	return (dst);
}
