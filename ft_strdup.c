/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorbke <lorbke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:05:55 by lorbke            #+#    #+#             */
/*   Updated: 2022/04/07 21:58:17 by lorbke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*sdup;
	int		ssize;

	ssize = ft_strlen(s1) + 1;
	sdup = (char *)malloc(sizeof(char) * ssize);
	if (sdup == NULL)
		return (NULL);
	ft_strlcpy(sdup, s1, ssize);
	return (sdup);
}
