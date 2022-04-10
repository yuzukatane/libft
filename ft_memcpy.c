/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuzu <kyuzu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:58:43 by kyuzu             #+#    #+#             */
/*   Updated: 2022/04/08 21:22:04 by kyuzu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dst_byte;
	const char	*src_byte;

	if (dst == NULL && src == NULL)
		return (dst);
	dst_byte = (char *)dst;
	src_byte = (char *)src;
	i = 0;
	while (i < n)
	{
		dst_byte[i] = src_byte[i];
		i++;
	}
	return (dst);
}
