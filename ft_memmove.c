/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuzu <kyuzu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:09:22 by kyuzu             #+#    #+#             */
/*   Updated: 2022/04/09 21:51:56 by kyuzu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dst_byte;
	char	*src_byte;

	if (dst == NULL && src == NULL)
		return (dst);
	else if (dst < src || dst - src > (long)n)
		ft_memcpy(dst, src, n);
	else
	{
		dst_byte = (char *)dst;
		src_byte = (char *)src;
		i = n - 1;
		while (i > 0)
		{
			dst_byte[i] = src_byte[i];
			i--;
		}
		if (i == 0)
			dst_byte[i] = src_byte[i];
	}
	return (dst);
}
