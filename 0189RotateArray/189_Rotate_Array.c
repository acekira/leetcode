void rotate(int* nums, int numsSize, int k) 
{
    if(k >= numsSize)
    {
        k = k%numsSize;
    }
    if (0 == k)
    {
        return;
    }
    int wStart;
    int wTemp;
    int wCounter = 0;
    int wCurrent;
    int wNext;
    int wPrev;
    for (wStart = 0; wCounter < numsSize; wStart++)
    {
        wCurrent = wStart;
        wPrev = nums[wStart];
        do
        {
            wNext = (wCurrent + k) % numsSize;
            wTemp = nums[wNext];
            nums[wNext] = wPrev;
            wPrev = wTemp;
            wCurrent = wNext;
            wCounter++;
        }
        while(wStart != wCurrent);       
    }
    return;
}