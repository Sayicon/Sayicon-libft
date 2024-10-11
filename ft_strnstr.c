#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!*needle)
		return ((char *)haystack);

	i = ft_strlen(needle);
	while (*haystack++ && len --)
	{
		if (!ft_strncmp(haystack, needle, i))
			return ((char *)haystack);
		if (len < i)
			return (NULL);
	}
	return (NULL);
}