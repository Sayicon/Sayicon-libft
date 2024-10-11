#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(src);
	ptr = (char *)malloc(len);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, src, len);
	return (ptr);
}