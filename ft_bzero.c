#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char	*string;

	string = (char *)s;
	while (n)
	{
		*string++ = 0;
		n --;
	}
}