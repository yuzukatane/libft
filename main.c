/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuzu <kyuzu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:50:27 by kyuzu             #+#    #+#             */
/*   Updated: 2022/04/12 21:38:07 by kyuzu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

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
	//---------------------------//
	// char src[] = "coucou";
	// char dest[10]; memset(dest, 'A', 10);
	// size_t	res;
	// res = ft_strlcpy(dest, src, -1);
	// printf("%s", dest);
	// if (res == strlen(src))
	// 	printf("1:OK\n");
	// if (!strcmp(src, dest))
	// 	printf("2:OK\n");
	// if (dest[strlen(src) + 1] == 'A')
	// 	printf("3:OK\n");


		

	// /*ft_strlcat*/						//to verify!
	// char 	catdst[100] = "Hello";
	// char 	catsrc[] = "ZZZZZ";
	// char 	catdst1[100] = "Hello";
	// size_t 	size = 7;
	// printf("\nft_strlcat\n");
	// printf("%lu : %s\n", ft_strlcat(catdst, catsrc, size), catdst);
	// printf("%lu : %s\n\n", strlcat(catdst1, catsrc, size), catdst1);

	// /* ft_memmove()*/
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

	// /*ft_strncmp*/
	// char *string1 = "Hello\n";
	// char *string2 = "Hello";
	// size_t size = 6;
	// printf("%d\n", ft_strncmp(string1, string2, size));
	// printf("%d\n", strncmp(string1, string2, size));

	// /*ft_memchr*/
	// char *str = "b01b2\03b45b";
	// int a = '4';
	// size_t size = 120;
	// printf("%s\n", ft_memchr(str, a, size));
	// printf("%s\n", memchr(str, a, size));

	// /*ft_memcmp*/
	// int	a[5] = {1,1,3,4,5};
	// int	b[5] = {1,2,3,4,5};
	// size_t	size = 5;
	// printf("%d\n", ft_memcmp(a, b, size));
	// printf("%d\n", memcmp(a, b, size));

	// /*ft_strnstr*/
	// char	a[30] = "aaabcabcd";
	// char	*b = "cd";
	// size_t	size = 8;
	// printf("%s\n", ft_strnstr(a, b, size));
	// printf("%s\n", strnstr(a, b, size));

	// /*ft_atoi*/
	// char *s = "   \t  21474836489";
	// printf("%d\n", ft_atoi(s));
	// printf("%d\n", atoi(s));

	// /*ft_calloc*/
	// char	*s1;
	// char	*s2;
	// s1 = ft_calloc(4294967295, 4294967295);
	// s2 = calloc(4294967295, 4294967295);
	// printf("%d\n", memcmp(s1, s2, 4));
	// free(s1);
	// free(s2);

	// /*ft_strdup*/
	// char	*str = "Hello World";
	// char	*cpy;
	// char	*cpy2;
	// cpy = ft_strdup(str);
	// cpy2 = strdup(str);
	// printf("%s\n", cpy);
	// printf("%s\n", cpy2);
	// free(cpy);
	// free(cpy2);

	// /*ft_substr*/
	// char	*str = "Hello World";
	// char	*substr;
	// substr = ft_substr(str, 110, 42000);
	// printf("%s\n", substr);
	// free(substr);

	// /*ft_strjoin*/
	// char	*s1 = "Hello";
	// char	*s2 = " World";
	// char	*s3;
	// s3 = ft_strjoin(s1, s2);
	// printf("%s\n", s3);

	/*ft_strtrim*/
	char	*s1 = "0123A45BC678D";
	char	*set = "ABCD";
	char	*res;

	res = ft_strtrim(s1, set);
	printf("%s\n", res);
	
}
