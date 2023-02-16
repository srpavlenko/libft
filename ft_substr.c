#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	slen;

	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if ((slen - start) < len)
		len = slen - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, (char *)(s + start), len + 1);
	return (str);
}
