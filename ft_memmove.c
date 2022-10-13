#include"libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    int i = n;
    char * ds = dest;
    const char * sc = src;
    if(ds < sc)
    {
    while(n--)
    {
        *ds++ = *sc++;
    }
    }
    else if(ds > sc) 
    {
      while(n--)
      {
        ds[n] = sc[n];
           
      }
    }
    return ds;

}

int main ()
{
    char  sc[13] = "abcdefjklmno";
    void *ptr;
    ft_memmove(sc+4,sc,6);
    printf("destination %s",sc); 
}

