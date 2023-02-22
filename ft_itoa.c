#include "libft.h"

static int	ft_itoalen(char **chrnum, int n)
{
	int		len;
	long	num;

	len = 0;
	num = n;
	if (num == 0)
		len = 2;
	if (num < 0 || num > 0)
	{
		while (num)
		{
			num /= 10;
			len++;
		}
		len++;
		num = n;
		if (num < 0)
			len++;
	}
	*chrnum = (char *)malloc(sizeof(char) * len);
	return (len);
}

char	*ft_itoa(int n)
{
	char	*chrnum;
	int		len;
	long	num;

	chrnum = NULL;
	len = ft_itoalen(&chrnum, n);
	if (chrnum == NULL)
		return (NULL);
	num = n;
	if (num == 0)
		*(chrnum + 0) = '0';
	if (num < 0)
	{
		*(chrnum + 0) = '-';
		num = -num;
	}
	*(chrnum + len - 1) = '\0';
	while (num)
	{
		*(chrnum + len - 2) = (num % 10) + '0';
		num /= 10;
		len--;
	}
	return (chrnum);
}
