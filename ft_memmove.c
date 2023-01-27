#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dststr;
	unsigned char	*srcstr;

	if (dst == NULL && src == NULL)
		return (NULL);
	dststr = (unsigned char *)dst;
	srcstr = (unsigned char *)src;
	if (dst > src)
	{
		while (len)
		{
			*(dststr + len - 1) = *(srcstr + len - 1);
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
