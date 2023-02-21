#include "libft.h"

static char	**ft_freesplit(char **str);
static char	**ft_splitsplit(char **str, const char *s, char c);
static int	ft_countsplit(char const *s, char c);

static char	**ft_freesplit(char **str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		free(*(str + i));
		i++;
	}
	free(str);
	return (NULL);
}

static char	**ft_splitsplit(char **str, const char *s, char c)
{
	int	cnt;
	int	stchr;

	cnt = 0;
	stchr = 1;
	while (*s)
	{
		if (*s == c || stchr)
		{
			stchr = 0;
			while (*s == c)
				s++;
			if (*s)
			{
				str[cnt] = ft_substr(s, 0, ft_strchr(s, c) - s);
				if (str[cnt] == NULL)
					return (ft_freesplit(str));
				cnt++;
			}
		}
		else
			s++;
	}
	str[cnt] = NULL;
	return (str);
}

static int	ft_countsplit(char const *s, char c)
{
	int	cnt;
	int	i;

	cnt = 0;
	i = 0;
	if (*s != c)
	{
		if (*s)
			cnt++;
	}
	while (*(s + i))
	{
		if ((*(s + i) == c) && (*(s + i + 1) != c) && (*(s + i + 1)))
			cnt++;
		i++;
	}
	cnt += 1;
	return (cnt);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	str = (char **)malloc(sizeof(char *) * ft_countsplit(s, c));
	if (str == NULL)
		return (NULL);
	return (ft_splitsplit(str, s, c));
}
