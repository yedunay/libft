/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydunay <ydunay@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:49:06 by ydunay            #+#    #+#             */
/*   Updated: 2023/10/15 12:13:15 by ydunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;
	size_t	j;

	j = start;
	i = 0;
	new = (char *)malloc(len + 1);
	if (!new || !s)
		return (NULL);
	while (start < ft_strlen(s) && i < len)
		new[i++] = s[j++];
	new[i] = '\0';
	return (new);
}
