#include<unistd.h>

void ft_putchar(char c)
{
    write(1, &c,1);
}

void ft_print_number(int nb)
{
    char c;

    c = nb + '0';
    write(1, &c,1);
}


void    ft_print_matrice(int matrice[4][4])
{
    int i_line;
    int i_col;

    i_line = 0;
    while (i_line < 5)
    {
        i_col = 0;
        while (i_col < 5)
        {
            ft_print_number(matrice[i_line][i_col]);
            ft_putchar(' ');
            i_col++;
        }
        ft_putchar('\n');
        i_line ++;
    }
}

void    ft_print_error(void)
{
    write(1, "Error\n", 6);
}
