/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorbke <lorbke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:31:00 by lorbke            #+#    #+#             */
/*   Updated: 2022/04/07 21:56:31 by lorbke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	sublen;
	char	*subs;

	if (ft_strlen(s) < start)
	{
		subs = "\0";
		return (subs);
	}
	sublen = ft_strlen(&s[start]);
	if (sublen < len)
		len = sublen;
	subs = (char *)malloc(sizeof(char) * len + 1);
	if (subs == NULL)
		return (NULL);
	ft_strlcpy(subs, &s[start], len + 1);
	return (subs);
}
