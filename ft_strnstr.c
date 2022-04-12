/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorbke <lorbke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 12:55:20 by lorbke            #+#    #+#             */
/*   Updated: 2022/04/07 15:40:28 by lorbke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!needle[0])
		return (&((char *)haystack)[0]);
	i = 0;
	j = 0;
	while (haystack[i] != 0 && i < len)
	{
		if (haystack[i] != needle[j])
			j = 0;
		if (haystack[i] == needle[j])
			j++;
		if (needle[j] == 0)
			return (&((char *)haystack)[i - j + 1]);
		i++;
	}
	return (NULL);
}
