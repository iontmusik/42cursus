#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int *ft_digits(long n)
{
	int	digits;
	int	neg;
	
	neg = 0;
	digits = 0;
	if (n < 0)
	{
		neg++;
		digits++;
		n *= -1;
	}
	while (n  > 0)
	{
		n /= 10;
		digits++; 
	}
	return (digits);
}

char	ft_putnbr(int nb)
{
	char	*str;
	int		i;
	
	while (digits)
	{
		str[i] = nb % 10 
		digits--;
	}
}

/*char	ft_putnbr(int n)
{
	
	
	
	int	multi;
	
	multi
	while (len)
	{
		str = (n % 10) + '0';
		len--;
		index++;
	}
	return (str);*/
}

int	main(void)
{
	int	n;
	
	n = 534;
//	printf("%d", ft_itoa(n));
	return (0);
}
