 /*#include <stdio.h>*/

 int    len_tab(char *tab)
 {
     int    i;

     i = 0;
     while (tab[i])
     {
         i++;
     }
     return (i);
 }

 char *ft_strncat(char *dest, char *src, unsigned int nb)
 {
     unsigned int    i_dest;
     unsigned int    i_src;

     i_dest = len_tab(dest);
     i_src = 0;
     while (src[i_src] && (i_src < nb))
     {
         dest[i_dest] = src[i_src];
         i_src++;
         i_dest++;
     }
     dest[i_dest] = '\0';
     return (dest);
 }

/*
int	main()
{
	char src[] = "01234";
	char dest[] = "numbers : ";
	printf("%s", ft_strncat(dest, src, 2));
}
*/