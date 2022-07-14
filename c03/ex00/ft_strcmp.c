 #include <stdio.h>

 int    ft_strcmp(char *s1, char *s2)
 {
     int    i;
     int    result;

     i = 0;
     while ((s1[i] || s2[i]) && (s1[i] == s2[i]))
     {
         i++;
     }
     result = s1[i] - s2[i];
     return (result);
 }

 int	main()
{
	printf("%d", ft_strcmp("012", "0123"));
	printf("\n%d", ft_strcmp("0123", "0"));
	printf("\n%d", ft_strcmp("0", "0"));
}