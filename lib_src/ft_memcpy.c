/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 17:00:01 by irhett            #+#    #+#             */
/*   Updated: 2017/06/28 22:38:49 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*temp;

	temp = dst;
	if (dst && src)
		while (n-- > 0)
			*(temp++) = *((char*)((src++)));
	return (dst);
}
