#include "libft.h"

unsigned int	ft_local_strlen(const char *s)
{
	unsigned int	count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	slen;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	slen = ft_local_strlen(s);
	if (start <= slen && len >= slen)
		sub = (char *)malloc((sizeof(*sub) * (slen - start)) + 1);
	if (start <= slen && len < slen)
		sub = (char *)malloc((sizeof(*sub) * len) + 1);
	if (start > slen || start > len)
		sub = (char *)malloc(sizeof(*sub));
	if (start <= len)
	{
		while (i < len && i + start < slen)
		{
			sub[i] = s[start + i];
			i++;
		}
	}
	sub[i] = '\0';
	return (sub);
}
