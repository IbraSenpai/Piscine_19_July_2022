#include "check_matrice.h"
#include "all_print.h"
#include "check_format.h"

int ft_solver(int matrice[4][4], int index_mat, int tab[16])
{
    int nb;

    nb = 1;
    while (nb < 5)
    {
        if (!ft_double_nb_check(matrice, index_mat, nb))
        {
            matrice[index_mat / 4][ index_mat % 4] = nb;
            if (!ft_ckeck_case(matrice, index_mat, tab))
            {
                if (ft_solver(matrice, index_mat + 1, tab))
                    return (1);
            }
            else
                matrice[index_mat / 4][ index_mat % 4] = 0;
        }
        nb ++;
    }
    return (0);
}

int ft_init_matricie(int matrice[4][4])
{
    int i;
    int j;

    while (i < 4)
    {
        while (j < 4)
        {
            matrice[i][j] = 0;
            j++; 
        }
        i++;
    }
    return (matrice);
}

int ft_init_tab(int tab[16], char **argv)
{
    int index_tab;
    int index_argv;
    int char_to_int;

    index_argv = 0;
    index_tab = 0;
    while (argv[1][index_argv])
    {
        char_to_int = argv[1][index_argv] - '0';
        tab[index_tab] = char_to_int;
        index_argv +=2;
        index_tab++;
    }
    return (tab);
}

int main(int argc, char **argv)
{
    int matrice[4][4];
    int tab [16];

    if (ft_check_all_format)
    {
        ft_init_tab(tab, argv);
        ft_init_matricie(matrice);
        if (ft_solver(matrice, 0, tab))
        ft_print_matrice(matrice);
        else
        ft_print_error();
    }
    else
    {
        ft_print_error();
        return (0);
    }
    return (0);    
}