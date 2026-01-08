#include <stdlib.h>

int is_space(char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}

char *trim(const char *str)
{
    int start = 0;
    int end = 0;
    int i;
    char *result;

    if (!str)
        return NULL;

    while (str[start] != '\0' && is_space(str[start]))
        start++;

    if (str[start] == '\0')
    {
        result = malloc(1);
        if (!result)
            return NULL;
        result[0] = '\0';
        return result;
    }

    end = start;
    while (str[end] != '\0')
        end++;
    end--;  

    while (end > start && is_space(str[end]))
        end--;

    
    result = malloc((end - start + 2) * sizeof(char));
    if (!result)
        return NULL;

    
    i = 0;
    while (start <= end)
    {
        result[i] = str[start];
        i++;
        start++;
    }
    result[i] = '\0';

    return result;
}
