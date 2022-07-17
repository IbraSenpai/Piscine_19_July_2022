int ft_double_nb_check(int matrice[4][4], int index_mat, int choice)
{
    int i;

    i = 0;
    while (i < index_mat / 4)
    {
        if (matrice[i][index_mat % 4] == choice)
            return (1);
        i++;
    }
        
    i = 0;
    while (i < index_mat % 4)
    {
        if (matrice[index_mat / 4][i] == choice)
            return (1);
        i++;
    }
    return (0);
}

int ft_check_up_to_down(int matrice[4][4], int index_mat, int tab[16])
{
    int i;
    int count_view;
    int height_max;

    i = 0;
    count_view = 0;
    height_max = 0;
    if (index_mat / 4 == 3)
    {
        while (i < 4)
        {
            if (matrice[i][index_mat % 4] > height_max)
            {
                height_max = matrice[i][index_mat % 4];
                count_view++;
            }
            i++;
        }
        if (count_view != tab[index_mat % 4 ])
            return (1);
    }
    return (0);
}

int ft_check_down_to_up(int matrice[4][4], int index_mat, int tab[16])
{
    int i;
    int count_view;
    int height_max;

    i = 3;
    count_view = 0;
    height_max = 0;
    if (index_mat / 4 == 3)
    {
        while (i >= 0)
        {
            if (matrice[i][index_mat % 4] > height_max)
            {
                height_max = matrice[i][index_mat % 4];
                count_view++;
            }
            i++;
        }
        if (tab[4 + index_mat % 4 ] != count_view)
            return (1);
    }
    return (0);
}

int ft_check_left_to_right(int matrice[4][4], int index_mat, int tab[16])
{
    int i;
    int count_view;
    int height_max;

    i = 0;
    count_view = 0;
    height_max = 0;
    if (index_mat % 4 == 3)
    {
        while ( i < 4)
        {
            if (matrice[index_mat / 4][i] > height_max)
            {
                height_max = matrice[index_mat / 4][i];
                count_view++;
            }
            i++;
        }
        if (count_view != tab[8 + index_mat / 4 ])
            return (1);
    }
    return (0);
}

int ft_check_right_to_left(int matrice[4][4], int index_mat, int tab[16])
{
    int i;
    int count_view;
    int height_max;

    i = 3;
    count_view = 0;
    height_max = 0;
    if (index_mat % 4 == 3)
    {
        while (i >= 0)
        {
            if (matrice[index_mat / 4][i] > height_max)
            {
                height_max = matrice[index_mat / 4][i];
                count_view++;
            }
            i--;
        }
        if (count_view != tab[12 + index_mat / 4 ])
            return (1);
    }
    return (0);
}

int ft_ckeck_case(int matrice[4][4], int index_mat, int tab[16])
{
    if (ft_check_up_to_down(matrice, index_mat, tab))
        return(1);
    if (ft_check_down_to_up(matrice, index_mat, tab))
        return(1);
    if (ft_check_left_to_right(matrice, index_mat, tab))
        return(1);
    if (ft_check_right_to_left(matrice, index_mat, tab))
        return(1);
    return (0);
}
