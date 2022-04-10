/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuzu <kyuzu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:21:10 by kyuzu             #+#    #+#             */
/*   Updated: 2022/04/10 09:59:30 by kyuzu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dest[i] != '\0')
		i ++;
	if (i > dstsize)
		return (dstsize + ft_strlen(src));
	j = 0;
	while (src[j] != '\0')
	{
		if (i < dstsize - 1)
			dest[i] = src[j];
		if (i == dstsize - 1)
		{
			i++;
			break ;
		}
		i ++;
		j ++;
	}
	dest[i] = '\0';
	return (i);
}
