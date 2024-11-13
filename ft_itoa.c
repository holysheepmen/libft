#include "libft.h"

static int	len_num(long nbr)
{
	int	i;

	i = 0;
	if (nbr < 0)
	{
		i++;
		nbr = -nbr;
	}
	if (nbr == 0)
		i++;
	while (nbr != 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);	
}

char	*ft_itoa(int n)
{
	char	*result;
	int	len;
	long	nbr;
	int	i;

	nbr = n;
	len = len_num(nbr);
	result = malloc(len + 1 * sizeof(char));
	if (!result)
		return(NULL);
	if (nbr < 0)
		nbr = -nbr;
	i = len - 1;
	if (n == 0)
		result[0] = '0';
	while (nbr != 0)
	{
		result[i] = (nbr % 10) + '0';
		nbr /= 10;	
		i--;
	}
	if (n < 0)
		result[0] = '-';
	result[len] = '\0';
	return (result);
}
