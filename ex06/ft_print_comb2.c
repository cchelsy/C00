#include <unistd.h>
static void print_nbr(int n)
{
	char tens;
	char units;

	tens = (n / 10) + '0';
	units = (n % 10) + '0';
	write(1, &tens, 1);
	write(1, &units, 1);
	}

void ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a<= 98)
	{
	b = a+1;
	while (b <= 99)
	{
		print_nbr(a);
		write(1," ",1);
		print_nbr(b);
		if (a !=98 || b != 99)
		write(1, ",", 1);
		b++;
	}
	a++;
	}
}

