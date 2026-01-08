static int ascii_cmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return ((unsigned char) s1[i] - (unsigned char)s2[i]);
}

char **sort(char **strs)
{
    int i;
    int swapped;
    char *tmp;

    if (!strs)
        return (strs);
    
        do {
            swapped = 0;
            i = 0;
            while (strs[i] && strs[i + 1])
            {
                if(ascii_cmp(strs[i], strs[i + 1]) > 0)
                {
                    tmp = strs[i];
                    strs[i] = strs[i + 1];
                    strs[i + 1] = tmp;
                    swapped = 1;
                }
                i++;
            }

        } while (swapped);
        return (strs);
}