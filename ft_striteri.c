/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydunay <ydunay@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 09:26:27 by ydunay            #+#    #+#             */
/*   Updated: 2023/10/15 09:42:50 by ydunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (!s)
		return ;
	i = -1;
	while (s[++i])
		f(i, &s[i]);
}
//   !!! ATTENTION !!! 
//#include <stdio.h>
// void my_func(unsigned int i, char *str)
// {
// 	printf("My inner function: index = %d and the string is %s\n", i, str);
// }

// int main()
// {
// 	char str[10] = "Hello.";
// 	printf("The result is %s\n", str);
// 	ft_striteri(str, my_func);
// 	printf("The result is %s\n", str);
// 	return 0;
// }