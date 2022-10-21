#include<string.h>
#include<stdio.h>
#include<stdlib.h>


    char * ft_substr(const char *s ,unsigned int start,size_t len)
    {
        int i =0;
            char *p = NULL;
        if(s == '\0' && len >= 0)
        {
            return (0);
        }
         if(start >= (unsigned int)strlen(s))
        {
            return (strdup(""));
        }
        p = (char *)malloc(len+1);
        if(p)
        {
        while(len)
        {
           p[i] = s[start+i];
                i++;
                len--;
        }
        p[i] = '\0';
        }
        return (p);
    }
   