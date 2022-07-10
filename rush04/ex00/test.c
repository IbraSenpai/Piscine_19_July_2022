#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	print_line(char start, char mid, char end, int larg)
{   
    int count_largeur;

    count_largeur = larg - 2;
	ft_putchar(start);
	while (count_largeur != 0)
    {
        ft_putchar(mid);
        count_largeur--;
    }
	if (count_largeur == 0)
    {
        ft_putchar(end);
    }
    ft_putchar('\n');
}

void	rush(int larg, int haut)
{   
    int count_hauteur;

    count_hauteur = haut - 2;
	if (larg < 1 || haut < 1)
		return ;
    else if (x == 1 && y == 1)
    {
        o
    }
    

	print_line('A', 'B', 'C', larg);
	while (count_hauteur != 0)
    {
        print_line('B', ' ', 'B', larg);
        count_hauteur--;
    }
	if (count_hauteur == 0)
    {
        print_line('C', 'B', 'A', larg);
    }
}

int main()
{
    rush(1,1);
    return 0;
}