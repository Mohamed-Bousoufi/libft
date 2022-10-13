#include"libft.h"

 size_t ft_strlcpy(char *dst, const char *src, size_t size)
 {
     int i = 0;
    while (i < size-1)
    {
        dst[i] = src[i];
            i++;
    }
        dst[i] = '\0';
            i++;
    return strlen(src);
 }
 int main ()
 {
    
     char s1 [5] = "over";
     char s2 [11] = "helpsghgs";
     int x =ft_strlcpy(s2,s1,4);
    printf("%s >>> copied to >>> %s [%d] ",s1,s2,x);
    
    
}
