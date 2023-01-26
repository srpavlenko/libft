#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dststr;
	unsigned char	*srcstr;
	size_t			i;

	if (dst == NULL && src == NULL)
		return (NULL);
	dststr = (unsigned char *)dst;
	srcstr = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		*(dststr + i) = *(srcstr + i);
		i++;
	}
	return (dst);
}
