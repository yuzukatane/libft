#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sbyte;
	size_t			i;

	sbyte = (unsigned char *)s;
	i = 0;
	while (sbyte[i] != (unsigned char)c)
	{
		if (i == n)
			return (NULL);
		i++;
	}
	return ((char *)&sbyte[i]);
}
