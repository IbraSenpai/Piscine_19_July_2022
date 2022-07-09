#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_line(char left, char middle, char right, int size)
{
	ft_putchar(left);
	while (size-- > 2)
		ft_putchar(middle);
	if (size == 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void cas_3(int larg, int haut)          // si x = 1 et y >1
{
    int count_hauteur;

    count_hauteur = haut - 2;
    ft_putchar('A');
    ft_putchar('\n');
    while(count_hauteur != 0)
    {
        ft_putchar('B');
        ft_putchar('\n');
        count_hauteur--;
    }
    ft_putchar('C');
    ft_putchar('\n');
}

void cas_4(int larg, int haut)          // si x > 1 et y = 1
{
    int count_largeur;

    count_largeur = larg - 2;
    ft_putchar('A');
    while(count_largeur != 0)
    {
        ft_putchar('B');
        count_largeur--;
    }
    ft_putchar('C');
    ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
		return ;
    else if (x == 1 && y == 1)
    {
        ft_putchar('A');
        ft_putchar('\n');
    }
    else if (x == 1 && y > 1)
    {
        cas_3(x,y);
    }
    else if (x > 1 && y == 1)
    {
        cas_4(x,y);
    }
    else
    {
        ft_print_line('A', 'B', 'C', x);
	    while (y-- > 2)
		ft_print_line('B', ' ', 'B', x);
	    if (y == 1)
		ft_print_line('C', 'B', 'A', x);
    }
}

int main()
{
    rush(4,4);
    return 0;
}