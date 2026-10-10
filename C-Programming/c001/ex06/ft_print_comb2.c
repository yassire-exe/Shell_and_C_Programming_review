#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_put2(int n)
{
	ft_putchar('0' + n / 10);
	ft_putchar('0' + n % 10);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_put2(a);
			ft_putchar(' ');
			ft_put2(b);
			if (!(a == 98 && b == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}
