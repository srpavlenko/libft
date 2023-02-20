#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (*s1 && ft_strchr(set, *(s1 + i)))
		i++;
	j = ft_strlen(s1);
	while (j > 0 && ft_strchr(set, *(s1 + j)))
		j--;
	if (j == 0)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (j - i + 2));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1 + i, j - i + 2);
	return (str);
}
