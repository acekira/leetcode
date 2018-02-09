uint32_t reverseBits(uint32_t n) 
{
    uint32_t i;
    uint32_t wReverse = 0;
    for (i = 32; n > 0; i--, n>>=1)
    {
        wReverse <<= 1 ;
        wReverse |= n&1;
    }
    wReverse <<= i;
    return wReverse;
}