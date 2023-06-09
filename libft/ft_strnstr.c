#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	biglen;
	size_t	littlelen;
	size_t	counter;

	if (!big && !little)
		return (NULL);
	counter = 0;
	if (*little == '\0')
		return ((char *)big);
	biglen = ft_strlen(big);
	littlelen = ft_strlen(little);
	if (biglen < littlelen || len < littlelen)
		return (NULL);
	while (counter + littlelen <= len)
	{
		if (ft_memcmp(big, little, littlelen) == 0)
			return ((char *)big);
		big++;
		counter++;
	}
	return (NULL);
}
