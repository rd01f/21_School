#include "libft.h"

unsigned int	my_local_strlen(const char *s)
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	len;
	unsigned int	i;
	char			*strj;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	len = my_local_strlen(s1) + my_local_strlen(s2);
	if (!(strj = malloc(sizeof(*strj) * len + 1)))
		return (NULL);
	while (*s1 != '\0')
		strj[i++] = *s1++;
	while (*s2 != '\0')
		strj[i++] = *s2++;
	strj[i] = '\0';
	return (strj);
}
