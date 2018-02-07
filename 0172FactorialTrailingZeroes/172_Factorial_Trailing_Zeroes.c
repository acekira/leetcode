int trailingZeroes(int n) 
{
    if (n < 5)
    {
        return 0;
    }
    int zero_counter = 0;
    int i = 0;
    while(n >= 5)
    {
        zero_counter += n/5;
        n/=5;
    }
    return zero_counter;
}