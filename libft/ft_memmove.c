/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vazra <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 12:26:07 by vazra             #+#    #+#             */
/*   Updated: 2021/01/04 12:43:13 by vazra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (dest);
	if (a > b)
		while (i < n)
		{
			a[n - 1] = b[n - 1];
			n--;
		}
	else
		while (i < n)
		{
			a[i] = b[i];
			i++;
		}
	return (dest);
}
