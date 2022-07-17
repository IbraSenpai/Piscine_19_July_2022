int ft_check_format_1(int argc, char **argv)
{
    int i;
    if (argc < 2 || argc > 2)
        return (0);
    i = 0;
    while (argv[1][i])
        i++;
    if (i != 31)
    return (0);
    return (1);
}

int ft_check_format_2(char **argv)
{
    int i;

    i = 0;
    while (argv[1][i])
    {
        if (argv[1][i] < '1'  || argv[1][i] > '4')
        return(0);
        i += 2;
    }
    return (1);
}

int ft_check_format_3(char **argv)
{
    int i;

    i = 1;
    while (argv[1][i])
    {
        if (argv[1][i] != ' ')
        return(0);
        i += 2;
    }
    return (1);
}

int ft_check_format_colum(char **argv)
{
    int i;

    i = 0;
    while (i <= 6)
    {
        if ((argv[1][i] == '4') && (argv[1][i + 8] != '1'))
        return (0);
        if ((argv[1][i] == '3') && ((argv[1][i + 8] != '1') 
        || (argv[1][i + 8] != '2')))
        return (0);
        if ((argv[1][i] == '2') && ((argv[1][i + 8] != '2') 
        || (argv[1][i + 8] != '3')))
        return (0);
        if ((argv[1][i] == '1') && ((argv[1][i + 8] != '4') 
        || (argv[1][i + 8] != '3') || (argv[1][i + 8] != '2')))
        return (0);
        i+= 2;
    }
    return (1);
}

int ft_check_format_line(char **argv)
{
    int i;

    i = 16;
    while (i <= 22)
    {
        if ((argv[1][i] == '4') && (argv[1][i + 8] != '1'))
        return (0);
        if ((argv[1][i] == '3') && ((argv[1][i + 8] != '1') 
        || (argv[1][i + 8] != '2')))
        return (0);
        if ((argv[1][i] == '2') && ((argv[1][i + 8] != '2') 
        || (argv[1][i + 8] != '3')))
        return (0);
        if ((argv[1][i] == '1') && ((argv[1][i + 8] != '4') 
        || (argv[1][i + 8] != '3') || (argv[1][i + 8] != '2')))
        return (0);
        i+= 2;
    }
    return (1);
}

int ft_check_all_format(int argc, char **argv)
{
    if (!ft_check_format_1(argc, argv))
    return (0);
    if (!ft_check_format_2(argv))
    return (0);
    if (!ft_check_format_3(argv))
    return (0);
    if (!ft_check_format_colum(argv))
    return (0);
    if (!ft_check_format_line(argv))
    return (0);
    return (1);
}