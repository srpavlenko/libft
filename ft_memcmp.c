#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*ststr;
	char	*ndstr;
	size_t	i;

	ststr = (char *)s1;
	ndstr = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (*(ststr + i) != *(ndstr + i))
			return ((unsigned char)*(ststr + i)
				- (unsigned char)*(ndstr + i));
		i++;
	}
	return (0);
}
