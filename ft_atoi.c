/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuzu <kyuzu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:11:04 by kyuzu             #+#    #+#             */
/*   Updated: 2022/04/11 21:26:52 by kyuzu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	long long	number;
	int			flag;

	flag = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		flag = 1;
		str++;
	}
	number = 0;
	while (*str >= '0' && *str <= '9')
	{
		number *= 10;
		number = number + (*str - '0');
		str++;
	}
	if (flag == 1)
		number = -number;
	return ((int)number);
}
