#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void    *array;

    array = (void *)malloc(count * size);
    if (array == NULL)
        return (NULL);
    ft_bzero(array, count * size);
    return (array);
}