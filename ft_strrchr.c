#include "libft.h"
#include <stdlib.h>

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
