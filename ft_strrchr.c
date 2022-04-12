/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuzu <kyuzu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 20:34:41 by kyuzu             #+#    #+#             */
/*   Updated: 2022/04/11 14:49:15 by kyuzu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if (len == 0)
		return (NULL);
	while (s[len] != (char)c)
	{
		if (len == 0)
			return (NULL);
		len--;
	}
	return ((char *)&s[len]);
}
