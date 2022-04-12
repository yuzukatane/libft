/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuzu <kyuzu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:37:50 by kyuzu             #+#    #+#             */
/*   Updated: 2022/04/12 21:59:37 by kyuzu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	get_nbr_trim(char const *s1, char const *set)
{
	int	nbr_trim;
	int	i;
	int	j;
	
	nbr_trim = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
			{
				nbr_trim++;
				break ;
			}
			j++;
		}
		i++;
	}
	return (nbr_trim);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	s1_len;
	int		nbr_trim;
	int		i;
	int		j;
	int		k;

	s1_len = (ft_strlen(s1));
	nbr_trim = get_nbr_trim(s1, set);
	res = malloc((s1_len - nbr_trim + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (i < (int)s1_len - 1)
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
			{
				i++;
				break ;
			}
			else if (set[j + 1] == '\0')
			{
				res[k] = s1[i];
				k++;
			}
			j++;
		}
		i++;
	}
	res[j] = '\0';
	return (res);
}
