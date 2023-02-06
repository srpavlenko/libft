#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	chr;
	char	*lstchr;

	chr = (char)c;
	lstchr = NULL;
	while (*s != '\0')
	{
		if (*s == chr)
			lstchr = (char *)s;
		s++;
	}
	if (chr == '\0')
		return ((char *)s);
	return (lstchr);
}
