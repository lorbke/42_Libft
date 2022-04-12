/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorbke <lorbke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:41:39 by lorbke            #+#    #+#             */
/*   Updated: 2022/04/06 12:27:06 by lorbke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	destlen;
	size_t	i;

	destlen = ft_strlen(dst);
	i = 0;
	while (src[i] != 0 && (int)i < (int)dstsize - (int)destlen - 1)
	{
		dst[destlen + i] = src[i];
		i++;
	}
	if (destlen > dstsize || dstsize == 0)
		return (ft_strlen(src) + dstsize);
	dst[destlen + i] = 0;
	return (ft_strlen(src) + destlen);
}
