/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydunay <ydunay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 07:13:13 by ydunay            #+#    #+#             */
/*   Updated: 2023/10/14 07:13:15 by ydunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n--)
	{
		if (*ptr == (char)c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str1[] = "Hello !";
// 	char c = '!';
// 	size_t n = 7;

// 	printf("Location of '%c' in string '%s' is at: %p\n", c, str1,
		//ft_memchr(str1, c, n));
// 	printf("Location of '%c' in string '%s' is at: %p\n", 'H', str1,
		//ft_memchr(str1, 'H', n));

// }
