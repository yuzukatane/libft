/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuzu <kyuzu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:26:39 by kyuzu             #+#    #+#             */
/*   Updated: 2022/04/12 20:08:40 by kyuzu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if (ft_strlen(s) < len)
		res = malloc((ft_strlen(s) + 1) * sizeof(char));
	else
		res = malloc((len + 1) * sizeof(char));
	if (res == NULL || s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		*res = '\0';
	else
		ft_strlcpy(res, &s[start], len + 1);
	return (res);
}
