#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	char	*ptr_src;

	ptr_src = (char *)src;
	i = 0;
	while (i < size && *dst)
	{
		dst ++;
		i ++;
	}
	if (i == size)
		return (size + ft_strlen(src));
	j = 0;
	while (ptr_src[j])
	{
		if(j < size - i - 1)
		{
			*dst = ptr_src[j];
			dst ++;
		}
		j ++;
	}
	*dst = 0;
	return (j + 1);
}