#include <unistd.h>

void	ft_print_combn(int n)
{
	int	tab[10];
	int	i;

	if (n <= 0 || n >= 10)
		return ;
	i = 0;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
	while (1)
	{
		i = 0;
		while (i < n)
		{
			write(1, &"0123456789"[tab[i]], 1);
			i++;
		}
		i = n - 1;
		while (i >= 0 && tab[i] == 10 - n + i)
			i--;
		if (i < 0)
			return ;
		write(1, ", ", 2);
		tab[i]++;
		while (i < n - 1)
		{
			tab[i + 1] = tab[i] + 1;
			i++;
		}
	}
}
