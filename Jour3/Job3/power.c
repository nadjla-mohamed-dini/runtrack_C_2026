int power(int n, int power)
{
    int result = 1;

    if (power < 0)
        return 0;
    
    while (power > 0)
    {
        result = result *n;
        power --;
    }
    return result;
}