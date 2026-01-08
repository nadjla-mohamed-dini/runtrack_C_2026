int my_sqrt(int n)
{
    int i = 0;

    if (n < 0)
        return 0;

    while (i * i <= n)
    {
        if (i * i == n)
            return i;
        i++;
    }
    return 0;
}
