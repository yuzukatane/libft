/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuzu <kyuzu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:50:27 by kyuzu             #+#    #+#             */
/*   Updated: 2022/04/10 16:05:29 by kyuzu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>


int	main(void)
{
	// /*ft_strlcpy*/					//to verify!
	// char 	cpydst[] = "Hello";
	// char 	cpysrc[] = "ZZZZZ";
	// char 	cpydst1[] = "Hello";
	// size_t size = 2;
	// printf("\nft_strlcy\n");
	// ft_strlcpy(cpydst, cpysrc, size);
	// printf("%s\n", cpydst);
	// strlcpy(cpydst1, cpysrc, size);
	// printf("%s\n\n", cpydst1);

	// /*ft_strlcat*/						//to verify!
	// char 	catdst[100] = "Hello";
	// char 	catsrc[] = "ZZZZZ";
	// char 	catdst1[100] = "Hello";
	// size_t 	size = 7;
	// printf("\nft_strlcat\n");
	// printf("%lu : %s\n", ft_strlcat(catdst, catsrc, size), catdst);
	// printf("%lu : %s\n\n", strlcat(catdst1, catsrc, size), catdst1);

	/* ft_memmove()*/
	// char a[] = "abcde";
	// char aa[] = "abcde";
	// printf("\nft_memmove\n");
	// ft_memmove(a, a, 1);
	// memmove(aa, aa, 1);
	// printf("%s\n", a);
	// printf("%s\n\n", aa);
	
	// /*ft_memcpy()*/
	// int m1[] = {0, 1, 2};
	// int m2[] = {0, 1, 2};
	// int m3[] = {10, 11, 12};
	// size_t msize = 3;
	// printf("\nft_memcpy\n");
	// ft_memcpy(m1, m3, msize);
	// for (int i = 0; i < 3; i ++)
	// 	printf("%d ", m1[i]);
	// printf("\n");
	// memcpy(m2, m3, msize);
	// for (int i = 0; i < 3; i ++)
	// 	printf("%d ", m2[i]);
	// printf("\n");

	// /*ft_toupper*/
	// int c = -5;
	// printf("%c ", ft_toupper(c));
	// printf("%c\n", toupper(c));

	// /*ft_tolower*/
	// int d = 'A';
	// printf("%c ", ft_tolower(d));
	// printf("%c\n", tolower(d));

	// /*ft_strchr && ft_strrchr*/
	// char *str = "b01b23b45b";
	// char a = 'b';

	// printf("%s\n", ft_strchr(str, a));
	// printf("%s\n", strchr(str, a));
	// printf("%s\n", ft_strrchr(str, a));
	// printf("%s\n", strrchr(str, a));

	// /*ft_strcmp*/
	// char *string1 = "Htllo";
	// char *string2 = "Hello";

	// printf("%d\n", ft_strncmp(string1, string2, 3));
	// printf("%d\n", strncmp(string1, string2, 3));

	/*ft_memchr*/
	char *str = "b01b2\03b45b";
	int a = '4';
	size_t size = 120;
	printf("%s\n", ft_memchr(str, a, size));
	printf("%s\n", memchr(str, a, size));
	
}
