#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char    *new;
    size_t  len;
    size_t  i;

    len = ft_strlen(s1) + 1;
    new = (char *)malloc(len * sizeof(char));
    if(new == NULL)
        return NULL;
    i = 0;
    while(s1[i])
    {
        new[i] = s1[i];
        i++;
    }
    new[i] = '\0';
    return new;
}
