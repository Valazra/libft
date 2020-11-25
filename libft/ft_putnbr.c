
#include "includes/libft.h"
#include <unistd.h>

void	test1(void)
{
	write (1, "0", 1);
	return ;
}

void	ft_putnbr(int n)
{
	unsigned long int	exp;
	unsigned int		temp;
	float				f;

	if (n < 0)
	{
		temp = -n;
		write(1, "-", 1);
	}
	else
		temp = n;
	if (n == 0)
		test1();
	exp = 1;
	while (temp >= exp)
		exp *= 10;
	exp /= 10;
	while (exp >= 1)
	{
		f = temp / exp;
		ft_putchar((long int)f + '0');
		temp -= ((long int)f) * exp;
		exp /= 10;
	}
}
