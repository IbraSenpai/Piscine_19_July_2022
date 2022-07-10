#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int cas_0(void)             // if x ou y <= 0
{
    return (0);
}

void cas_1(void)           // x et y = 1
{
    write(1,"A\n", 2);
}

void cas_2(int larg, int haut)          // si x = 1 et y >1
{
    int count;

    count = haut - 2;
    write(1, "A\n", 2);
    while(count != 0)
    {
        write(1,"B", 2);
        count--;
    }
    write(1,"\nC\n", 3);
}

void cas_3(int larg, int haut)          // si x > 1 et y = 1
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

/*void cas_4(int larg, int haut)          // si x > 1 et y > 1
{
    int count_space;
    int count_hauteur;

    count_space = larg - 2;
    count_hauteur = 1;
    write(1,"A");
    while (count_hauteur != haut + 1)
    {
        if (count_hauteur == 1)
        {
            while ( count_space != 0);
            {
                write(1,"B", 1);
                count_space--;
            }
            write(1,"C\n", 2);
            count_space = larg - 2;
        }
        els (count_hauteur == 1)
        {
            while ( count_space != 0);
            {
                write(1,"B", 1);
                count_space--;
            }
            write(1,"C\n", 2);
            count_space = larg - 2;
        }
    }

}
*/
void rush(int x, int y)
{
    if( x <= 0 || y <= 0)
    {
        write(1,"error\n", 6);
    }
    else if(x == 1 && y == 1)
    {
        cas_1();
    }
    else if (x == 1 && y > 1)
    {
        cas_2(x,y);
    }
    else if (x > 1 && y == 1)
    {
        cas_3(x,y);
    }
    
}


int main()
{   
    rush(1,1);
    return (0);
}

