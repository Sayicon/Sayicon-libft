int	ft_atoi(const char *str)
{
	int	sign;
	int	value;

	sign = 1;
	value = 0;
	while (*str == '\t' || *str == '\r' || *str == ' '
		|| *str == '\f' || *str == '\v' || *str == '\n')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str ++;
	}
	while (*str <= '9' && *str >= '0')
	{
		value = value * 10 + (*str++ - '0');
	}
	return (value * sign);
}