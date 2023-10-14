/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydunay <ydunay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 07:39:46 by ydunay            #+#    #+#             */
/*   Updated: 2023/10/14 07:39:48 by ydunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t n)
{
	size_t	len;

	len = 0;
	if (d == NULL && s == NULL)
		return (NULL);
	if (s < d)
	{
		len = n;
		while (len > 0)
		{
			len--;
			((unsigned char *)d)[len] = ((unsigned char *)s)[len];
		}
	}
	else
	{
		len = 0;
		while (len < n)
		{
			((unsigned char *)d)[len] = ((unsigned char *)s)[len];
			len++;
		}
	}
	return (d);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char d[4] = "YED";
// 	char s[4] = "DEY";
// 	ft_memmove(d, s, 3);
// 	printf("%s", d);
// }