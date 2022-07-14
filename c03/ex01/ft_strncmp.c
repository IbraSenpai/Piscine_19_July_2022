 /*#include <stdio.h>*/

 int    ft_strncmp(char *s1, char *s2, unsigned int n)
 {
     unsigned int    i;
     int    result;

     i = 0;
     while ((s1[i] || s2[i]) && (s1[i] == s2[i]) && (i < n))
     {
         i++;
     }
     result = s1[i] - s2[i];
     return (result);
 }

/*int    main()
{
	printf("%d", ft_strncmp("0123", "012345", 4));
}*/