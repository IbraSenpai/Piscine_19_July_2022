//#include<stdio.h>

int ft_sqrt(int nb)
{
    float index;
    float root;
    float value;

    if (nb <= 0)
        return (0);
    else if (nb == 1)
        return (1);
    else
    {
        value = nb;
        root = 0;
        while (root <= nb)
        {
            value = root * root;
            root += 0.0001;
            if (value >= nb)
                break;

        }
        return root;
    }
    
}

/*int main()
{
    printf("%d", ft_sqrt(0));
}*/