/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuzu <kyuzu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:57:34 by kyuzu             #+#    #+#             */
/*   Updated: 2022/04/07 18:36:49 by kyuzu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	int	i;
	int	capacity;
	int	totalsize;

	i = 0;
	capacity = dstsize - 1;
	while (capacity > 0 && src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
		capacity --;
	}
	if (dstsize != 0)
		dest[i] = '\0';
	totalsize = ft_strlen(src);
	return (totalsize);
}
