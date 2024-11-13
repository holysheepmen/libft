#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	signe;
	
	i = 0;
	signe = 1;
	result = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
            		signe = -1;
        i++;
	}
	while (str[i] >= '0' && str[i] <= '9') 
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	result *= signe;
	return (result);
}
