#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ptr;

	ptr = (unsigned char *)s;
	c = (unsigned char)c;
	while (n && *ptr != c)
	{
		n --;
		ptr ++;
	}
	if (n != 0)
		return ((void *)ptr);
	else
		return (NULL);
}