#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	j;
	size_t	i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if ((dstsize == 0) || (dstsize <= dstlen))
		return (srclen + dstsize);
	j = dstlen;
	i = 0;
	while (*(src + i) && (i < (dstsize - dstlen - 1)))
	{
		*(dst + j) = *(src + i);
		j++;
		i++;
	}
	*(dst + j) = '\0';
	return (dstlen + srclen);
}
