int	ft_atoi(const char *str)
{
	int	sgn;
	int	rsl;
	int	i;

	i = 0;
	while ((*(str + i) == ' ') || (*(str + i) == '\f') || (*(str + i) == '\n')
		|| (*(str + i) == '\r') || (*(str + i) == '\t') || (*(str + i) == '\v'))
		i++;
	sgn = 1;
	if (*(str + i) == '+' || *(str + i) == '-')
	{
		if (*(str + i) == '-')
			sgn = -1;
		i++;
	}
	rsl = 0;
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		rsl = (rsl * 10) + (*(str + i) - '0');
		i++;
	}
	return (sgn * rsl);
}
