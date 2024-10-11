#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *d;
	const char *s;

	if (!dest && !src)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	d = (char *)dest;
	s = (const char *)src;
	while (n)
	{
		d[n - 1] = s[n - 1];
		n --;
	}
	return (dest);
}