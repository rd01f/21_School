#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	while (n--)
	{
		if (*(char *)src == (char)c)
			return ((void *)src);
		src++;
	}
	return (0);
}
