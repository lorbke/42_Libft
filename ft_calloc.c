/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorbke <lorbke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:52:18 by lorbke            #+#    #+#             */
/*   Updated: 2022/04/06 21:03:40 by lorbke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	allocsize;

	allocsize = count * size;
	ptr = (size_t *)malloc(allocsize);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, allocsize);
	return (ptr);
}
